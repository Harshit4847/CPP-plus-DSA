#include<iostream>
using namespace std;

int bitwise(int n){
    if (n == 0) {
        cout << "Not a power of two" << endl;
        return 0;
    }
    if ((n & (n - 1)) == 0) {
        cout << "Power of two" << endl;
    } else {
        cout << "Not a power of two" << endl;
    }
}
int loop(int n){

    if (n == 0) {
        cout << "Not a power of two" << endl;
        return 0;
    }
    while (n != 1) {
        if (n % 2 != 0) {
            cout << "Not a power of two" << endl;
            return 0;
        }
        n = n / 2;
    }
    cout << "Power of two" << endl;
}
int main(){

    int n;
    cout << "Enter the number of which you want to check if it is power of two: ";
    cin >> n;
    loop(n);
    bitwise(n);
    return 0;
}