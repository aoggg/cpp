// Atcoder abc381_c
// 2025-01-02

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ans = 1;
    for (int i = 0; i < N; i++) {
        int n1 = 0, n2 = 0;
        if (S[i] == '1') {
            for (i; S[i] == '1'; i++) n1++;
            if (S[i] == '/') {
                i++;
                for (i; S[i] == '2'; i++) n2++;
                ans = max(ans, min(n1, n2) * 2 + 1);
                i--;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}