#include<iostream>
using namespace std;

int main () {
    int n = 10;
    int term1 = 0;
    int term2 = 1;
    int sum = 0;
    if (n == 1) {
        std::cout << term1 << std::endl;
    } else if (n == 2) {
        std::cout << term2 << std::endl;
    } else {
        for (int i = 0; i < n; ++i) {
            std::cout << sum << std::endl;
            sum = term1 + term2;
            term1 = term2;
            term2 = sum;
        }
        
    }
    
    return 0;
}