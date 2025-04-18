#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1, 2, 3, 5, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = 0;

        for(int i = 0; i < n; i++){
            int elemat = arr[i];
            for(int j = 0; j < n; j++){
                if(arr[j] == elemat){
                    index = arr[j];
                }
            }
            for(int k = n; k >= n; k--){
                if(arr[k] == elemat){
                    if(arr[index]!= elemat){
                        printf("%d", arr[k]);
                    
                    }
                }
            }
        }
    return 0;
}