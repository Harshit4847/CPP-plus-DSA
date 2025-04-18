#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; // Input number of rows

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Loop through each column in the row
        for (int j = 1; j <= n; j++) {
            cout << j; // Print star followed by space
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}