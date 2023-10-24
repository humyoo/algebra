#include <iostream>
#include <cmath>

using namespace std;

const double EPSILON = 0.000001;

void compareFloats(int num1, int num2) {
    double result1 = 1.0 / num1;
    double result2 = 1.0 / num2;
    if (abs(result1 - result2) < EPSILON) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    }
    else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    compareFloats(num1, num2);
    return 0;
}
