
#include <iostream>
#include <math.h>

int main()
{
     int a = 1;
     float b = 20.01;
     double result = 0, M_PI = 3.14159;

     result = pow((0.719 / b) * ((b * b - a * a) / (a * a + b * b)) + cos(b * log(M_PI / 6)), 1.0 / 3);
     std::cout << "Result: " << result;
       
 
}
