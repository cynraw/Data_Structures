#include <iostream> 
using namespace std;

// Factorial function
int fact(int a) {
    int factorial = 1;
    if (a == 0 || a == 1) {
        return 1; // Base case
    }
    for (int i = 2; i <= a; i++) { // Start from 2
        factorial = factorial * i; // Multiply by i
    }
    return factorial; // Return the computed factorial
}

int main() {
    int n;
    cout << "Enter the number you wish to find the factorial: " << endl;
    cin >> n;
    cout << "Factorial: " << fact(n) << endl;

    return 0; 
}
