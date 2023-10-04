#include <iostream>
#include <cmath>

using namespace std;

double function(double x) {
    return pow(x, 1.0 / 4) - 8 * sin(x);
}

int main() {
    double a, b, h;

 
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter h: ";
    cin >> h;

    cout << "-------------------" << endl;
    cout << ":   X   :   Y   :" << endl;
    cout << "-------------------" << endl;

    for (double x = a; x <= b; x += h) {
        double y = function(x);

        if (x < 0 || sin(x) == 1.0) {
            cout << ": " << x << " : Invalid value x" << " :" << endl;
        }
        else {
            cout << ": " << x << " : " << y << " :" << endl;
        }
    }

    cout << "-------------------" << endl;

    return 0;
}

