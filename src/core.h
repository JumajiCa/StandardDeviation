
#ifndef JU_CORE 
#define JU_CORE 

#include <iostream> 
#include <assert.h> 
#include "math.h" 

struct core{ 

    // This Is the Variable That Determines The State of The Main While Loop In 'initLoop();. 
    bool State{true}; 
    // Variable That Stores The User's Initial Input To Choose What Case In The Switch Loop They Want To Choose. This Is Handeled Inside Of The 'initLoop' Function. 
    int8_t switchInput; 

    // IMPORTANT! Call This Function After The HandleUserSD Function. 
    // This Just Starts The Initial Loop For The Program. 
    void initLoop(); 

    // Handles All Of The Input For The Variables That Are Used In The Switch Statement In 'initLoop()'. 
    void handleSwitchIn(); 
}; 

#endif 

