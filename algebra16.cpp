

#include <iostream>
#include <math.h>

int main()
{
   int a = 3;
   float b = 0.501;
   double M_PI = 3.14159;

   double numerator = pow(((a - b), 2) * sin(pow(1 - a / b, 2 * M_PI / 3)) * cos(pow(1 - b / a, 2* M_PI / 3)), 1. / 3);; //чисельник
   double denominator = 0.701 * log( pow(a - b, 2)) ;  //знаменник

   double result =  numerator / denominator; 

  std::cout << "Result: " << result;
   
}

