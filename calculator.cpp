#include <iostream>
#include "calculator.h"
using namespace std;

//these are all of the calculator function implementations

double addition(double x, double y){
return x + y; //adding two numbers 
}
double subtract(double x, double y){
return x - y; //subtracting two numbers
}
double multiply(double x, double y){
return x*y; //multiplying two numbers
}
double divide(double x, double y)
{
if(y == 0){ //gives a message if the user is trying to divide by zero. 
cout << "Do not divide by zero." << endl;
return 0;
}
return x/y; //dividing two numbers
}
int factorial(int x){
int product = 1; //the variable acts as the product of the factorial
while(x > 0){
product = product * x; //multiplies until x reaches one.
x--; 
}
return product;
}
int GCD(int x, int y){
int greatestfactor;
if(y > x){ //swaps them if the big number is smaller than the small number
int temp = y;
y = x;
x = temp;
}
for(int i = 1; i <= x; i++){
if(x % i == 0 && y % i == 0){ //finds a factor between them until i reaches the big number.
greatestfactor = i; //assigns and returns this factor. 
}
}
return greatestfactor;
}
void LCM(int x, int y){
int maxnumber; 

if(x > y){
maxnumber = x; //gets the maximum number from the two inputs first. 
}
else{
maxnumber = y;
}
while(1){ //keeps going until the remainder from both inputs is zero and then outputs the least common multiple. 
if(maxnumber % x == 0 && maxnumber % y == 0){

cout << maxnumber << " is the LCM" << endl;
break;
}
maxnumber++; //adds value to max number to keep the function going. 
}
}
int RNG(int x, int y){
if(y > x){ //swaps the numbers if the upper limit is smaller than the lower limit.
int temp = y;
y = x;
x = temp;
}
return y + rand() % (x - y + 1); //returns a random number within this limit. 
}