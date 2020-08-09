#include<iostream>
using namespace std;

int main () {
    int input1 = 6, temp = 1;
    for(int i = 1; i<=input1; i++) { 
        temp = temp * i;
    }
    std::cout << "The Factorial of " << input1 << " is : " << temp<<endl;
    return 0;
}