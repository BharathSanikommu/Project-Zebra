#include<iostream>
using namespace std;

int main () {
    int target= 32452;
    int sum = 0;
    while (target > 0) {
        int code = target % 10;
        target = target/10;
        sum += code;
    }
    std::cout << "The sum of digits is : " << sum << std::endl;
    return 0;
}