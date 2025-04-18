#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char a = 'A';
    
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){
            cout << a << " ";
            a += 1;
        }
        cout << endl;
    }
}