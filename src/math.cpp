
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
void standardD::getMean(float &Mean){ // NOTE. - Currently Correct. 
    standardD standardD; 
    // NOTE. - Out - Of - Bound Indexes Are Really F*cking Weird. Like, 8.50434e-41, Kind Of Weird 😔. 
    for (size_t i{0}; i < standardD.sdVec.size(); i++){ 
        Mean = {Mean + standardD.sdVec[i]}; 
    } 
    Mean = {Mean / standardD.sdVec.size()}; 
} 

void standardD::resetMean(float &Mean){ 
    Mean = {0}; 
} 

void standardD::getVariance(std::vector<float> &Vec, float &Mean, float &varVariance){ // NOTE. - This Currently Works. 
    float Temp{}; 
    // NOTE. - This Sh*t Isn't F*cking Working For Some Reason. 
    // NOTE. - Talk To Smarter Human to Know Why It Is Printing Out Twice. 
    for (size_t i{0}; i < Vec.size(); i++){ 
        // Initialize Temp With The Difference Between The Value In The Vector And The Mean. 
        Temp = {Vec[i] - Mean}; 

        /* std::cout << "----------------------------------------------------------------- " << std::endl; 
        std::cout << "Vector Value. - " << Vec[i] << ". " << std::endl; 
        std::cout << "----------------------------------------------------------------- " << std::endl; 
        // Prints The Mean. 
        // TODO. - Find Out Why The Hell This Isn't Printing Out The Right Value For SD.Mean. 
        std::cout << "Mean. - " << Mean <<  ". " << std::endl; 
        std::cout << "----------------------------------------------------------------- " << std::endl; 
        // This Should Print Out The Vector Index Minus The Mean. 
        std::cout << "Temp. - " << Temp << ". " << std::endl; 
        std::cout << "----------------------------------------------------------------- " << std::endl; */ // NOTE. - This Is Just Debug Functionality. 

        // Raise Temp To The Second Power. 
        Temp = {std::pow(Temp, 2.0f)}; 

        // std::cout << "Temp After The Exponent. - " << Temp << ". " << std::endl; 
        varVariance += Temp; 

        // Reset the Value Of Temp To Zero. 
        Temp = {0}; // NOTE. - This Works As Intended, For Now, At Least. 
        // SD.varVariance = {(SD.varVariance - Vec[i])}; 

    } 
    // NOTE. - Debug. 
    // std::cout << varVariance << std::endl; 
} 

// NOTE. - I Might Make This Return A Float. 
// NOTE. - These Parametres May Be Unnecessary With How I'm Going About Doing It. 
float standardD::SD(float &varVariance, float &Mean){ 
    standardD SD; 
    getMean(SD.Mean); 
    getVariance(SD.sdVec, SD.Mean, SD.varVariance); 
    std::cout << SD.varVariance << std::endl; 
    // NOTE. - Temporary. 
    return sqrt(SD.varVariance); 
} 

