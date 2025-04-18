#include<iostream>
using namespace std;

int largestelement(int arr[], int n){
    int largest = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int smallestelement(int arr[], int n){
    int smallest = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest element: " << largestelement(arr, n) << endl;
    cout << "Smallest element: " << smallestelement(arr, n) << endl;
}