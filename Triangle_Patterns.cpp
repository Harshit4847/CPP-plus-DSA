#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //int a = 0;
    //char a = 'A' - 1;

    for(int i = 0; i < n; i++){
        int a = 1;
        for(int j = 0; j < i; j++){
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}