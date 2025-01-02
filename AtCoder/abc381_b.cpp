// Atcoder abc381_b
// 2025-01-02

#include <iostream>
using namespace std;

int appeared[30];

int main() {
    string S;
    cin >> S;
    int T = S.size();
    bool check = true;
    if (T % 2 != 0) check = false;
    for (int i = 0; i < T && check; i++) {
        if (i % 2 == 1)
            if (S[i] != S[i - 1]) check = false;
        appeared[S[i] - 'a']++;
        if (appeared[S[i] - 'a'] > 2) check = false;
    }
    if (check) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}