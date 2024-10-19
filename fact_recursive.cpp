#include <iostream>
using namespace std;

int fact(int a) {
    // Base case
    if (a == 0) {
        return 1; // Factorial of 0 is 1
    }
    if (a > 0) {
        return a * fact(a - 1); // Recursive case
    }
    return -1; // Optional: Handle negative input
}

int main() {
    int n;
    cout << "Enter a number you wish to calculate its factorial: " << endl;
    cin >> n;
    
    // Optional: Check for negative input
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " is: " << fact(n) << endl;
    }

    return 0;
}
