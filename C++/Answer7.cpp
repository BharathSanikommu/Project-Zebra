#include<iostream>
using namespace std;

int main () {
    int targetInt = 3425;
    int revTargetInt = 0;
    int remainder = 0;
    
    string targetStr = "honey";
    string revTargetStr = "";
    int lenTargetSize = targetStr.size();
    for (int i = lenTargetSize-1 ; i >=0 ; i--) {
        revTargetStr += targetStr.at(i);
    }
    std::cout << "Target String : " << targetStr << std::endl;
    std::cout << "Reverse Integer : " << revTargetStr << std::endl;

    std::cout << "Targer Integer : " << targetInt << std::endl;
    while(targetInt>0) {
        remainder = targetInt % 10;
        revTargetInt = (revTargetInt*10)+ remainder;
        targetInt = targetInt / 10;
    }
    std::cout << "Reverse Integer : " << revTargetInt << std::endl;
    

    return 0;
}