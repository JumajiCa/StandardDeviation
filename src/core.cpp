
#include "core.h" 
#include "math.h" 

// TODO. - Maybe Add File Export Functionality. 
// NOTE. - You Have To Create A Member Variable Even In A Definition For The Struct. 

/* void core::T(){ 
    core Fun; 
    std::cout << Fun.State << std::endl; 
} */ 

void core::initLoop(){ 

    core core; 

    while (core.State == true){ 
        // TODO. - Handle Certain String Inputs As Certain Numberical Values. 
        standardD SD; 
        // The Variables That Are Supposed To Go Insde Of The 'SD' Function. 
        std::vector<int> Vec{1'000, 21, 23, 219, 2'819}; 
        int Number{25}; 
        float Test{128}; 

        // TODO. - Make This Process Part Of The 'handleSwitchIn()' Function. 
        std::cout << "Input. " << std::endl; 
        std::cin >> core.switchInput; 

        switch (core.switchInput){ 
            case 'e': 
                core.State = {false}; 
                break; 
            // NOTE. - This One Is Just For Test Purposes. 
            case 't': 
                std::cout << "Test. " << std::endl; 
                break; 
            // case '\0': 
                // std::cout << "Enter A Valid Input! " << std::endl; 
                break; 
            case '1': 
                SD.getMean(SD.Mean); 
                std::cout << SD.Mean << std::endl; 
                SD.resetMean(SD.Mean); 
                break; 
            case '2': 
                float In{0}; 
                std::cout << "Numeric Input. " << std::endl; 
                std::cin >> In; 
                std::cout << SD.SD(SD.sdVec, Number) << std::endl;  
                break; 
        }
    }
} 

// TODO. - Finish Writting The Logic For This Function. 
// TODO. - Add All Of The Variables That Are Going To Be Used For This Function F
void core::handleSwitchIn(){ 
} 

