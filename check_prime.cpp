#include<iostream>
using namespace std;

int is_prime(int n, int i = 2){
    if(n <= 1){
        return 0;
    }
    if(i * i > n){
        return 1;
    }
    if(n % i == 0){
        return 0;
    }
    return is_prime(n, i + 1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(is_prime(n)){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}