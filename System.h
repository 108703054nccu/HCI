#include"Countdown.h"
#include<iostream>
#include<string.h>
class System{
    private:
      bool IS_LOCKED;
      bool IS_STAY_SYSTEM;
      std::string command;
      enum System_tip{
        LOCKED,
        UNLOCKED,
        SET
      };//define system message
      enum command_tip{
        SetInitialCode,
        VaildCode,
        DeleteCode
      };
      Time System_time;
    public:
      System();
      void System_Exe();
      int System_commandexe(command_tip);
      void Enter_Command();
     // System::System_tip System::GetBodyCode();
     // System::System_tip System::DeleteBodyCode();
     // System::System_tip System::VaildBodyCode();


};