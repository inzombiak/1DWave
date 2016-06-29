#pragma once

#include "..\\LuaPlusLib\LuaPlus.h"

#include <string>
#include <vector>
#include "Point.h"

/*
Based on implementation in Game Coding Complete 4
*/

class LuaStateManager
{
	static LuaStateManager* s_luaStateManager;
	LuaPlus::LuaState* m_luaState;
	std::string m_lastError;

public:
	// Singleton functions
	static bool Create();
	static void Destroy();
	static LuaStateManager* GetInstance() 
	{	
		assert(s_luaStateManager); 
		return s_luaStateManager; 
	}

	// IScriptManager interface
	bool Init();
	void ExecuteFile(const char* resource);
	void ExecuteString(const char* str);

	LuaPlus::LuaObject GetGlobalVars();
	LuaPlus::LuaState* GetLuaState() const;

	// public helpers
//	LuaPlus::LuaObject CreatePath(const char* pathString, bool toIgnoreLastElement = false);
	void ConvertTableToVec(const LuaPlus::LuaObject& luaTable, thrust::host_vector<Point>& outVec, bool dsdt) const;

private:
	void SetError(int errorNum);
	void ClearStack(void);

	// private constructor & destructor; call the static Create() and Destroy() functions instead
	explicit LuaStateManager(void);
	virtual ~LuaStateManager(void);
};

