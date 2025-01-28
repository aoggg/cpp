// Atcoder abc377_a
// 2025-01-18

#include <iostream>
using namespace std;

const int MAXN = 30;

int main() {
    string S;
    cin >> S;
    bool appeared[MAXN] = {false};
    for (int i = 0; i < S.size(); i++) appeared[S[i] - 'A'] = true;
    bool check = true;
    for (int i = 0; i < 3; i++) {
        if (!appeared[i]) check = false;
    }
    if (!check) cout << "No\n";
    else cout << "Yes\n";
    return 0;
}