#include <iostream>
using namespace std;

int main() {

    double pi4 = 0.;
    long n;

    cout << "Number of iterations? ";
    if (!(cin >> n) || n < 0) {
        cout << "Invalid input." << endl;
        return 1;
    }

    for (long i = 0; i < n; i++) {
        pi4 += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}
