
#include <iostream>

int main() {
    int N;
    std::cout << "Enter a three-digit positive number N: ";
    std::cin >> N;

    if (N >= 100 && N <= 999) { 
        int digit1 = N / 100; 
        int digit2 = (N / 10) % 10; 
        int digit3 = N % 10; 

        int count = 0; 

        if (digit1 != 1 && digit1 != 9) {
            count++;
        }

        if (digit2 != 1 && digit2 != 9) {
            count++;
        }

        if (digit3 != 1 && digit3 != 9) {
            count++;
        }

        std::cout << "Numbers that are not equal to 1 and 9: " << count << std::endl;
    }
    else {
        std::cout << "Enter a valid three-digit positive number." << std::endl;
    }

    return 0;
}

