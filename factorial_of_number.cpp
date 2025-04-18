#include<iostream>
using namespace std;

int main () {
    int n, factorial = 1;
    cout << "Enter a number: ";
    cin >> n;
    
    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Multiply to get factorial
    }
    
    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}