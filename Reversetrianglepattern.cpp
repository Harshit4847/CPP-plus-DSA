#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //int a = n;
    for(int i = 0; i < n; i++){
        //int a = n;
        for(int j = i+1; j > 0; j--){
            cout << j << " ";
            //a--;
            //a -= j;
        }
        cout << endl;
    }
}