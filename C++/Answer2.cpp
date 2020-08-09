#include<iostream>
using namespace std;

int main () {
    int target = 30;
    int trigger = 0;
    for (int i = 2; i < target/2; i++) {
        if(target %i == 0) {
            trigger+=1;
            break;
        }
    }

    if (trigger == 0) {
        std::cout << "The number " << target << " is a prime number." << std::endl;   
    } else {
        std::cout << "The number " << target << " is not a prime number." << std::endl;
    }
    
    
    return 0;
}