#include<iostream>
using namespace std;

int l[105];

int main(){
    int N, sum;
    cin >> N;
    for ( int i = 1; i <= N; i++ ){
        cin >> l[i];
        if ( i == 1 ){
            sum = l[i];
        }
        else {
            sum += l[i] - 1;
        }
    }
    cout << sum << '\n';
    return 0;   
}
