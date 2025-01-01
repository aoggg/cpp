// Atcoder abc382_b
// 2025-01-01

#include <iostream>
using namespace std;

const int MAXN = 105;

int main() {
    int N, D;
    cin >> N >> D;
    string S;
    cin >> S;
    for (int i = N - 1; i >= 0 && D > 0; i--) {
        if (S[i] == '@') {
            S[i] = '.';
            D--;
        }
    }
    cout << S << '\n';
    return 0;
}