#include <iostream>
#include "calculator.h"
using namespace std;

int main(){
//the below tests the functions implemented successfully.
cout << addition(10, 5) << endl;
cout << subtract(32, 13) << endl;
cout << multiply(4, 6) << endl;
cout << divide(30, 3) << endl;
cout << factorial(5) << endl;
cout << GCD(30, 40) << endl;
LCM(50, 25);
cout << endl;
cout << RNG(20, 7) << endl;
}