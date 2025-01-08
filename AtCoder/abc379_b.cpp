// Atcoder abc379_b
// 2025-01-08

#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int health = 0;
        while (S[i] == 'O') {
            health++;
            i++;
        }
        ans += health / K;
    }
    cout << ans << '\n';
    return 0;
}