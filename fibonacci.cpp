#include <iostream>
using namespace std;

void fibonacci(int x) {
    int a = 0;
    int b = 1;
    int next;

    // Print the Fibonacci series
    for (int i = 1; i <= x; i++) {
        cout << a << " "; // Print the current term
        next = a + b;     // Calculate the next term
        a = b;            // Move to the next term
        b = next;         // Update the next term
    }
    cout << endl; // Newline after the series
}

int main() {
    int n;
    cout << "Enter the number of terms you want in the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci series of " << n << ": ";
    fibonacci(n); // Call the function to print the series

    return 0; 
}
