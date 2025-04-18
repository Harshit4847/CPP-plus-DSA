#include<iostream>
using namespace std;

int linearsearch(int arr[], int n){

    for(int i = 0; i < 5; i++){
        if(arr[i] == n){
            return i;
        }
    }

    return -1; // Not found
}
int main(){
    int n[5] = {1, 2, 3, 4, 5};
    int a = 0;

    cout << "Enter the number you want to search: ";
    cin >> a;

    int result = linearsearch(n, a);

    
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;

}