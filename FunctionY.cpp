

#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int x, a, b, c;
    double w;

    std::cout << "Enter x value: ";
    std::cin >> x;
    std::cout << "Enter a value: ";
    std::cin >> a;
    std::cout << "Enter b value: ";
    std::cin >> b;
    std::cout << "Enter c value: ";
    std::cin >> c;

    if (b>5)
    {
        w = pow(4 - x, a * b);
    }
    else if (b >= c)
    {
        w = (1. / 4 + b * c);
    }
    std::cout << "Result: " << w << std::endl;
}
