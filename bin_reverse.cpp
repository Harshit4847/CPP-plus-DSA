#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of which you want reverse binary: ";
    cin >> n;
    int binary = 0, i = 1;
    while (n != 0) {
        int rem = n % 2;
        binary = binary + rem * i;
        n = n / 2;
        i = i * 10;
    }

    cout<< binary << endl;
}