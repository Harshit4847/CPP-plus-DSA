#include<iostream>
using namespace std;

void swapMaxMin(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];

    // Find max and min values
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Swap all occurrences of max and min
    for(int i = 0; i < n; i++) {
        if(arr[i] == max) {
            arr[i] = min;
        } else if(arr[i] == min) {
            arr[i] = max;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    swapMaxMin(arr, n);

    cout << "Array after swapping max and min: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
