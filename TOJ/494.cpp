#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    for ( int i = 0; i < n * k; i++ ){
        for ( int j = 0; j < n * k; j++ ){
            if ( i / k % 2 == j / k % 2 ){
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;    
}

