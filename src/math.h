
#ifndef JU_MATH 
#define JU_MATH 

#include <iostream> 
#include <vector> 
#include <bits/floatn-common.h>


// NOTE. - So Far, This Isn't Broken. 
struct standardD{ 

    // This Vecotr Will Later Be Inputted With Numbers Coming From The User Through The 'handleUserSD()' Function. 
    std::vector<float> sdVec = {10.0f, 20.0f, 30.0f, 40.0f, 50.0f, 60.0f}; 
    uint64_t sizeOfVec{sdVec.size()}; 
    // TODO. - Remember To Remove This Implicit And Hard - Coded Variable, Or To At Least Make The Value 0. 
    float Mean{10.5}; 
    float varVariance{0}; 


    // IMPORTANT! Call This Fucntion First. 
    // This Function Is Going To Handle All Of The Inputs For The 'standardD' struct; Basically, It Is Going To Define All Of The Member Variables With User Inputs. 
    void handleUserSD(); 
    void getMean(float &Mean); 
    void resetMean(float &Mean); 
    void getVariance(std::vector<float> &Vec, float &varVariance); 
    float SD(std::vector<float> numVector, int Mean); 

}; 

#endif 

