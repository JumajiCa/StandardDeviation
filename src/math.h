
#include <iostream> 
#include <vector> 
#include <bits/floatn-common.h>

#ifndef JU_MATH 
#define JU_MATH 

// NOTE. - So Far, This Isn't Broken. 
struct standardD{ 

    public: 
        std::vector<float> sdVec = {1, 2, 3, 4, 5, 6}; 
        int Mean; 
        float varVariance; 

        // IMPORTANT! Call This Fucntion First. 
        // This Function Is Going To Handle All Of The Inputs For The 'standardD' struct; Basically, It Is Going To Define All Of The Member Variables With User Inputs. 
        void handleUserSD(); 
        void getMean(); 
        float SD(std::vector<int> numVector, int Mean, float Variance); 
        float Variance(int Mean); 
}; 

#endif 

