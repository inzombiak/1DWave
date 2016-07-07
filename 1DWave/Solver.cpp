#include "Solver.h"
#include <string>
#include <Windows.h>
#include "GPUKernel.h"
#include <sstream>

#include "LuaStateManager.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Solver::Init(const DiskParameters& dp, const std::vector<Point>& initialPoints, int steps, int saveInterval, bool dSigmaDtau)
{
	LuaStateManager::Create();

	m_discParams = dp;
	m_steps = steps;
	m_saveInterval = saveInterval;
	m_dSigmadTauFlag = dSigmaDtau;

	m_hostDistribution.clear();
	m_hostDistribution.resize(2);
	m_hostDistribution[0].resize(initialPoints.size());
	m_hostDistribution[1].resize(initialPoints.size());
	

	m_hostDistribution[0] = initialPoints;
	m_outputDirectory = "Output/Test2";
	CreateDirectoryA(m_outputDirectory.c_str(), NULL);

	/*string description, inputFilepath, token;
	char temp;
	std::ifstream m_inputFile;
	cout << "Enter input filenames (without .lua) delimited with commas: ";
	cin >> inputFilepath;
	std::stringstream stream(inputFilepath);
	while (stream >> token)
	{
		std::size_t prev = 0, pos;
		while ((pos = token.find_first_of(",", prev)) != std::string::npos)
		{
			if (pos > prev)
				m_inputFilenames.push_back(token.substr(prev, pos - prev));
			prev = pos + 1;
		}
		if (prev < token.length())
			m_inputFilenames.push_back(token.substr(prev, std::string::npos));
	}
	cout << "Enter save directory name (each period will be saved as a separate): ";
	cin >> m_outputDirectory;

	m_outputDirectory = "Output/" + m_outputDirectory;
	CreateDirectoryA(m_outputDirectory.c_str(), NULL);
	string output;

	for (int i = 0; i < m_inputFilenames.size(); ++i)
	{
		m_hostDistribution.clear();
		m_hostDistribution.resize(2);

		LoadFromLUA(i);

		output = m_outputDirectory + "/" + m_inputFilenames[i];
		CreateDirectoryA(output.c_str(), NULL);

		unsigned int distribSize = m_hostDistribution[0].size();
		string outputFilepath;
		std::ofstream outputFile;

		outputFilepath = output + "/Default.txt";
		outputFile.open(outputFilepath, std::ofstream::trunc);

		for (unsigned int j = 1; j < distribSize - 1; ++j)
		{
			outputFile << m_hostDistribution[0][j].GetSigmaByString() << endl;
		}
		outputFile.close();

		Run(output);

		m_inputFile.close();
	}*/

}

void Solver::Run(string outputFilename)
{
	unsigned int i = 0, j = 0;
	unsigned int distribSize = m_hostDistribution[0].size();
	int readRow, writeRow;
	string outputFilepath;
	std::ofstream outputFile;
	outputFilepath = m_outputDirectory + "/test" + ".txt";
	outputFile.open(outputFilepath, std::ofstream::trunc);
	outputFile << m_discParams.minRo << " " << m_discParams.maxRo << " " << m_discParams.deltaRo << endl;
	for (i = 1; i < m_steps; ++i)
	{
		readRow = (i + 1) % 2;
		writeRow = (readRow + 1) % 2;

		CalculateOnGPU(readRow, writeRow, m_discParams);
		cout << "Step: " << i << endl;
		m_hostDistribution[writeRow][0].Barrier(m_hostDistribution[writeRow][2]);
		m_hostDistribution[writeRow][distribSize - 1].Barrier(m_hostDistribution[writeRow][distribSize - 3]);
		
		if (i%m_saveInterval == 0)
		{
			
			
			if (!outputFile)
				cout << "Could nto open file" << std::endl;

			for (unsigned int j = 1; j < distribSize-1; ++j)
			{
				outputFile << m_hostDistribution[writeRow][j].GetSigmaByString() << endl;
			}
			
			
		}
	}
	
	//for (unsigned int j = 1; j < distribSize - 1; ++j)
	//{
	//	outputFile << m_hostDistribution[writeRow][j].GetValuesByString()<< endl;
	//}

	//outputFile.close();

}
void Solver::CalculateOnGPU(int readRow, int writeRow, const DiskParameters& m_discParams)
{
	CalculateOnGPUKernel(m_hostDistribution[readRow], m_hostDistribution[writeRow], m_discParams);
}
/*
void Solver::LoadFromLUA(int filenameIndex)
{
	string input;
	input = "Input/" + m_inputFilenames[filenameIndex] + (".lua");
	auto luaState = LuaStateManager::GetInstance();
	

	luaState->ExecuteFile(input.c_str());
	LuaPlus::LuaObject function = luaState->GetGlobalVars().GetByName("CalcDistrib");

	m_discParams.Us0 = luaState->GetGlobalVars().GetByName("_us0").GetDouble();
	m_discParams.deltaRo = luaState->GetGlobalVars().GetByName("_deltaRho").GetDouble();
	m_discParams.Epsilon = luaState->GetGlobalVars().GetByName("_epsilon").GetDouble();
	m_steps = luaState->GetGlobalVars().GetByName("_steps").GetInteger();
	m_saveInterval = luaState->GetGlobalVars().GetByName("_saveInterval").GetInteger();
	m_dSigmadTauFlag = luaState->GetGlobalVars().GetByName("_dSigmadTauFlag").GetBoolean();
	m_discParams.SetParameters();
	Point newPoint;
	m_hostDistribution[0].push_back(newPoint);
	LuaPlus::LuaFunction<LuaPlus::LuaObject> distribFunction(function);
	luaState->ConvertTableToVec(distribFunction(), m_hostDistribution[0], m_dSigmadTauFlag);

	cout << m_hostDistribution[0].size() << endl;

	m_hostDistribution[0].push_back(newPoint);

	m_hostDistribution[0][0].Barrier(m_hostDistribution[0][2]);
	m_hostDistribution[0][m_hostDistribution[0].size() - 1].Barrier(m_hostDistribution[0][m_hostDistribution[0].size() - 3]);

	m_hostDistribution[1].resize(m_hostDistribution[0].size());
}
*/