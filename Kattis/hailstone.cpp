#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = n;
    while ( n != 1 ){
        // cout << n << '\n';
        if ( n % 2 == 1){
            n = 3 * n + 1;
        }
        else{
            n /= 2;
        }
        ans += n;
    }
    cout << ans << '\n';
    return 0;
}
