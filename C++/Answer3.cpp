#include<iostream>
#include<string>
using namespace std;

int main () {
    string strTarget = "racecar";
    string revStrTarget = "";
    int intTarget = 123321;
    int revIntTarget = 0;
    int tempVal = intTarget;
    int remainder = 0;
    
    int lenTargetSize = strTarget.size();
    for (int i = lenTargetSize-1 ; i >=0 ; i--) {
        revStrTarget += strTarget.at(i);
    }
    if (strTarget == revStrTarget) {
        std::cout << "The String is a Palindrome." << std::endl;
    } else {
        std::cout << "The String is not a Palindrome" << std::endl;
    }
    
    while(tempVal>0) {
        remainder = tempVal % 10;
        revIntTarget = (revIntTarget*10)+ remainder;
        tempVal = tempVal / 10;
    }
    if (intTarget == revIntTarget) {
        std::cout << "The Integer is a Palindrome." << std::endl;
    } else {
        std::cout << "The Integer is not a Palindrome" << std::endl;
    }
        

    return 0;
    }