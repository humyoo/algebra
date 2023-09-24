#include <iostream>

int main() {
    int busNumber;

    std::cout << "Enter the bus number from the following: 198, 757, 825, 280, 195, 303, 777. " << std::endl;
    std::cout << "Your choice: ";
    std::cin >> busNumber;

    int stops;

    switch (busNumber) {
    case 198:
        stops = 10;
        break;
    case 757:
        stops = 15;
        break;
    case 825:
        stops = 12;
        break;
    case 280:
        stops = 20;
        break;
    case 195:
        stops = 8;
        break;
    case 303:
        stops = 25;
        break;
    case 777:
        stops = 18;
        break;
    default:
        std::cout << "There is no information about the bus with this number." << std::endl;
        return 1; 
    }

    std::cout << "Number of bus stops " << busNumber << ": " << stops << std::endl;

    return 0;
}

