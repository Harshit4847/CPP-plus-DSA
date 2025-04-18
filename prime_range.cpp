#include<iostream>
using namespace std;


int primerange(int n){

    for(int i = 2; i <= n; i++){
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Prime numbers up to " << n << " are: ";
    primerange(n);
    return 0;
}