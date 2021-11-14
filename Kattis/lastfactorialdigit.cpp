#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for ( int i = 1; i <= T; i++){
        int N;
        cin >> N;
        int ans = 1;
        for ( int num = 1; num <= N; num++){
            ans *= num;
        }
        cout << ans % 10 << '\n';
    }
    return 0;
}
