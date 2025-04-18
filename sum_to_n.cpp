#include<iostream>
using namespace std;

int sum_to_n(int n){
    if(n == 0){
        return 0;
    }
    return n + sum_to_n(n - 1);
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " is: " << sum_to_n(n) << endl;
    return 0;
}