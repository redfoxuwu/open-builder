#pragma once

#include <sol/sol.hpp>
#include <vector>

class ScriptEngine;

class ClientLuaCallbacks {
  public:
    ClientLuaCallbacks(ScriptEngine& scriptEngine);

    void onClientStartup();

  private:
    std::vector<sol::function> m_onClientStartupCallbacks;
};