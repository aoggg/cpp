// Atcoder abc386_b
// 2024-12-28

#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    int ans = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '0' && S[i + 1] == '0') i++;
        ans++;
    }
    cout << ans << '\n';
    return 0;
}