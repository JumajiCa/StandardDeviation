
#include <iostream> 
#include <assert.h> 

#ifndef JU_WIDNOW 
#define JU_WIDNOW 

struct core{ 

    private: 

    public: 

        // This Is the Variable That Determines The State of The Main While Loop In 'initLoop();. 
        bool State{true}; 
        // Variable That Stores The User's Initial Input To Choose What Case In The Switch Loop They Want To Choose. This Is Handeled Inside Of The 'initLoop' Function. 
        int8_t switchInput; 

        // Test Function. 
        // void T(); 

        // IMPORTANT! Call This Function After The HandleUserSD Function. 
        // This Just Starts The Initial Loop For The Program. 
        void initLoop(); 

        // Handles All Of The Input For The Variables That Are Used In The Switch Statement In 'initLoop()'. 
        void handleSwitchIn(); 

        // IMPORTANT! Call This Fucntion First. 
        // This Function Is Going To Handle All Of The Inputs For The 'standardD' struct; Basically, It Is Going To Define All Of The Member Variables With User Inputs. 
        void handleUserSD(); 
}; 

#endif 
