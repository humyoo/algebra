
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, u;

    for (int i = 0; i < 5; i++) {
        cout << "Enter value x: ";
        cin >> x;

        u = pow(sin(x), 5) + abs(5 * x - 1.5);

        cout << "The value of the function at x = " << x << " is equal to " << u << endl;
    }

    return 0;
}
