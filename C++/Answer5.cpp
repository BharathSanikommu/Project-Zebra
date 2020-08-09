#include<iostream>
using namespace std;

int main () {
    int c = 0, a, temp;
    int n = 153;
    temp = n;
    std::cout << n << " is ";
    while (n>0) {
        a = n%10;
        n = n/10;
        c = c + (a*a*a);
    }
    if (temp == c) {
        std::cout << "an armstrong number" << std::endl;
    } else {
        std::cout << "not an armstrong number" << std::endl;
    }
    return 0;
}