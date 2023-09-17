
#include <string>
#include <iostream>

int main()
{
    int x, y;

    std::cout << "Enter x value: ";
    std::cin >> x;
    std::cout << "Enter y value: ";
    std::cin >> y;

    if (x >= 0 && x <= 2 && y >= 0 && y <= 2)
    {
        std::cout << "WIN";
    }
    else
    {
        std::cout << "LOSE";
    }
}


