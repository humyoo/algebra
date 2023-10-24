#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer value greater than 1: ";
    cin >> n;

    if (n <= 1 || n > 20) {
        cout << "Sorry, the side size is invalid." << endl;
    }
    else {
        cout << '+';
        for (int i = 0; i < n - 2; i++)
            cout << '-';
        cout << '+' << endl;
        for (int i = 0; i < n - 2; i++) {
            cout << '|';
            for (int j = 0; j < n - 2; j++)
                cout << ' ';
            cout << '|' << endl;
        }
        cout << '+';
        for (int i = 0; i < n - 2; i++)
            cout << '-';
        cout << '+' << endl;
    }

    return 0;
}
