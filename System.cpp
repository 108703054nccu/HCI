#include"System.h"
System::System(){
    IS_LOCKED = true;
    IS_STAY_SYSTEM = true;
    command = "";
}
void System::Enter_Command(){
    std::cout<<"please Enter your command:";
    std::cin>>command;
}
void System::System_Exe(){
    while(IS_STAY_SYSTEM){
        //locked
        //Do a initial motion code
        //GetBodyCode();
        //unlock
        Enter_Command();
        if(command=="Exit")IS_STAY_SYSTEM = false;
    }
}
//System::System_tip System::GetBodyCode(){
    //std::cout<<"Ready to get Our Body code"<<std::endl;
    //System_time.CountDown(3);
    //擷取圖像循環
    //擷取成功彈回 good get
    //擷取失敗彈回 bad get
   // return UNLOCKED;
//}
//System::System_tip System::DeleteBodyCode(){;}
//System::System_tip System::VaildBodyCode(){;}
