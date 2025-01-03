// Atcoder abc380_d
// 2025-01-03

#include <iostream>
using namespace std;
using ll = long long;

bool ask(ll n) {
    if (n == 0) return true;
    if (n & 1) return !ask(n >> 1);
    return ask(n >> 1);
}

char trans(char c) {
    if (c >= 'A' && c <= 'Z') return c - 'A' + 'a';
    return c - 'a' + 'A';
}

int main() {
    string S;
    cin >> S;
    int l = S.size();
    int Q;
    cin >> Q;
    bool ft = true;
    while (Q--) {
        if (!ft) cout << ' ';
        ft = false;
        ll K;
        cin >> K;
        K--;
        if (ask(K / l)) cout << S[K % l];
        else cout << trans(S[K % l]);
    }
    cout << '\n';
    return 0;
}