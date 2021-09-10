
#include <iostream> 
#include <vector> 
#include <bits/floatn-common.h>

#ifndef JU_MATH 
#define JU_MATH 

int32_t scratchAdd(int Number1, int Summand); 

// NOTE. - So Far, This Isn't Broken. 
// TODO. - Come Up With A Better Struct Name. 

struct standardD{ 

    private: 
        // Defining All Private Member Variables That Will Be Used In The Struct.  
        int Mean; 
        float varVariance; 
        // vector<int> numVector; // Maybe I'll Store The Given Vector Of Numbers As A Private Member Too. 

    public: 
        float SD(std::vector<int> numVector, int Mean, float Variance); 
        float Variance(int Mean); 
}; 

#endif 

