#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    while ( x >= 10 ){
        int digits = 1;
        for ( ; x > 0 ; x /= 10 ){
            if ( x % 10 != 0 ){
                digits *= x % 10;
            }
        }
        x = digits;
    }
    cout << x << '\n';
    return 0;
    
}
