#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int product = 1;
    int sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        product *= arr[i];
        sum += arr[i];
    }
    cout << "Product of array elements: " << product << endl;
    cout << "Sum of array elements: " << sum << endl;
}