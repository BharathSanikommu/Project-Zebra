#include<iostream>
using namespace std;

int main () {
    int alpha = 42;
    int beta = 84;
    std::cout << "A : "<< alpha << std::endl;
    std::cout << "B : "<< beta << std::endl;
    alpha = alpha + beta;
    beta = alpha - beta;
    alpha = alpha - beta;
    std::cout << "A : "<< alpha << std::endl;
    std::cout << "B : "<< beta << std::endl;
    return 0;
}