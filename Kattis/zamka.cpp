#include<iostream>
using namespace std;

int main(){
    int L, D, X, smallest = 10000, biggest = 0;
    cin >> L >> D >> X;
    for ( int i = L; i <= D; i++ ){
        int sum = 0;
        for ( int j = i; j > 0; j /= 10 ){
            sum += j % 10;
        }
        if ( sum == X ){
            if ( smallest > i ){
                smallest = i;
            }
            if ( biggest < i ){
                biggest = i;
            }
        }
    }
    cout << smallest <<'\n';
    cout << biggest << '\n';
    return 0;
}
