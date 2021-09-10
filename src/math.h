
#ifndef JU_MATH 
#define JU_MATH 

#include <iostream> 
#include <vector> 
#include <bits/floatn-common.h>


// NOTE. - So Far, This Isn't Broken. 
struct standardD{ 

    // This Vecotr Will Later Be Inputted With Numbers Coming From The User Through The 'handleUserSD()' Function. 
    std::vector<float> sdVec = {1, 2, 3, 4, 128.38, 821.218}; 
    uint64_t sizeOfVec{sdVec.size()}; 
    float Mean; 
    float varVariance; 


    // IMPORTANT! Call This Fucntion First. 
    // This Function Is Going To Handle All Of The Inputs For The 'standardD' struct; Basically, It Is Going To Define All Of The Member Variables With User Inputs. 
    void handleUserSD(); 
    void getMean(float &Mean); 
    float SD(std::vector<int> numVector, int Mean, float Variance); 
    float Variance(int Mean); 

}; 

#endif 

