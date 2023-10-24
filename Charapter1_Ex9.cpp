#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2, num3, num4;
    cout << "Enter four numbers in the range 1 to 255:" << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 < 1 || num1 > 255 || num2 < 1 || num2 > 255 || num3 < 1 || num3 > 255 || num4 < 1 || num4 > 255) {
        cout << "Numbers should be in the range 1 to 255" << endl;
        return 1;
    }

    string ip = to_string(num1) + "." + to_string(num2) + "." + to_string(num3) + "." + to_string(num4);
    cout << ip << endl;

    return 0;
}
