#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        // Check if the number is divisible by 3
        if (i % 3 == 0) {
            sum += i; // Add to sum if divisible by 3
        }
    }
    
    cout << "Sum of numbers divisible by 3 from 1 to " << n << " is: " << sum << endl;
    return 0;
}