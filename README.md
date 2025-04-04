This is a calculator library containing the main mathematical operations.
The library contains the following functions:

addition(double, double)                 // Adds two given doubles
subtract(double, double)                 // Subtracts two given doubles
multiply(double, double)                 // Multiplies two given doubles
divide(double, double)                   // Divides two given doubles
factorial(int)                           // Finds factorial of a given integer
GCD(int, int)                            // Finds the greatest common factor of two given integers
LCM(int, int)                            // Finds the least common multiple of two given integers 
RNG(int, int)                            // Returns a random number between two given integers

In order to use this library you must include it at the beginning of your file using #include "calculator.h". You must also add the file with your main function into the build file and remove the "test.cpp" if you wish to use your own main file. Otherwise, you may just edit the test.cpp file and it will work normally. You then need to type "make" in your terminal window while in the directory with the main function and library. Then proceed to run the executable.
