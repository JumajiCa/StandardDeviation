
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
    // TODO. - Get This Piece Of Sh*t To Work. 
    // NOTE. - Out - Of - Bound Indexes Are Really F*cking Weird. Like, 8.50434e-41, Kind Of Weird 😔. 
    for (size_t i{0}; i < standardD.sdVec.size(); i++){ 
        std::cout << standardD.sdVec[i] << std::endl; // NOTE. - For Debugging Purposes Only. 
        Mean = {Mean + standardD.sdVec[i]}; 
        std::cout << Mean << std::endl; 
    } 
    Mean = {Mean / 2}; 
} 

float standardD::Variance(int Mean){ 
    float Variance; 
    return Variance; 
} 

float standardD::SD(std::vector<int> numVector, int Mean, float Variance){ 
    return std::sqrt(Variance); 
} 

