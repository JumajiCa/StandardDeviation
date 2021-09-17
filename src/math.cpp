
#include "math.h" 
#include <cmath>
#include <math.h> 

// NOTE. - Also, It Might Be Better To Store The Variance And The Mean As Private Or Protected Members. 

void standardD::handleUserSD(){ 
    standardD standardD; 
    std::cout << "Enter The Vector Numbers. " << std::endl; 
} 

// NOTE. - I Was So Caught Up With The Fact That I Made This A Void Function For Some Reason That I Forgot That Return Statements Were A Possible Answer Too. 
// NOTE. - This Might Lead To Some Future Errors, But I Can't Be Bothered To Fix It And Make It Into A Proper Float Function Right Now. 
void standardD::getMean(float &Mean){ 
    standardD standardD; 
    // NOTE. - Out - Of - Bound Indexes Are Really F*cking Weird. Like, 8.50434e-41, Kind Of Weird 😔. 
    for (size_t i{0}; i < standardD.sdVec.size(); i++){ 
        std::cout << standardD.sdVec[i] << std::endl; // NOTE. - For Debugging Purposes Only. 
        Mean = {Mean + standardD.sdVec[i]}; 
        std::cout << Mean << std::endl; 
    } 
    Mean = {Mean / standardD.sdVec.size()}; 
} 

void standardD::resetMean(float &Mean){ 
    Mean = {0}; 
} 

void standardD::getVariance(std::vector<float> &Vec, float &varVariance){ 
    standardD SD; 
    float Temp{}; 

    // NOTE. - This Sh*t Isn't F*cking Working For Some Reason. 
    // NOTE. - Talk To Smarter Human to Know Why It Is Printing Out Twice. 

    for (size_t i{0}; i < Vec.size(); i++){ 
        // Initialize Temp With The Difference Between The Value In The Vector And The Mean. 
        Temp = {Vec[i] - SD.Mean}; 

        // TODO. - Fix This Bug; For Some Reason, The Program Is Adding Way More Into varVariance Than It Should be. 
        // NOTE. - For Some Reason, This Prints Out 0 And Then 1, Even Though It Is Only Called Once. 
        std::cout << varVariance << std::endl; 

        std::cout << Vec[i] << std::endl; 
        // Prints The Mean. 
        std::cout << SD.Mean << std::endl; 
        // This Should Print Out The Vector Index Minus The Mean. 
        std::cout << Temp << std::endl; 

        // Raise Temp To The Second Power. 
        Temp = {std::pow(Temp, 2.0f)}; 

        varVariance = {varVariance + Temp}; 

        // Reset the Value Of Temp To Zero. 
        Temp = {0}; 


        std::cout << Temp << std::endl; 
        // SD.varVariance = {(SD.varVariance - Vec[i])}; 

    } 
} 

// NOTE. - I Might Make This Return A Float. 
float standardD::SD(std::vector<float> numVector, int Mean){ 
    standardD SD; 
    getMean(SD.Mean); 
    getVariance(SD.sdVec, SD.varVariance); 
    // NOTE. - Temporary. 
    return std::sqrt(SD.varVariance); 
    std::cout << std::sqrt(SD.varVariance) << std::endl; 
} 

