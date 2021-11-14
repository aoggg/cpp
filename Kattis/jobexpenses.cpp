#include<iostream>
using namespace std;

int main(){
    int N, ans = 0;
    cin >> N;
    for ( int i = 1; i <= N; i++){
        int k;
        cin >> k;
        if ( k < 0 ){
            ans -= k;
        }
    }
    cout << ans << '\n';
    return 0;
}
