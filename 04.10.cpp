#include <iostream>

using namespace std;

int main() {
    int n = 10;  
    double sum = 0; 

    for (int i = 1; i <= n; i++) {
        int num;
        cout << "Enter a natural number " << i << ": ";
        cin >> num;

 
        if (num <= 0) {
            cout << "The number must be a natural number. Try again." << endl;
            i--;  
            continue;
        }

        sum += static_cast<double>(num * num);
    }


    double average = sum / n;

    cout << "The arithmetic mean of the squares of the entered numbers: " << average << endl;

    return 0;
}
