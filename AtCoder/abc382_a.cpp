// Atcoder abc382_a
// 2025-01-01

#include <iostream>
using namespace std;

const int MAXN = 105;

int main() {
    int N, D;
    cin >> N >> D;
    string S;
    cin >> S;
    int ans = D;
    for (int i = 0; i < N; i++) 
        if (S[i] == '.') ans++;
    cout << ans << '\n';
    return 0;
}