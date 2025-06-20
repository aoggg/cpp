// Atcoder abc394_d
// 2025-06-20

#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;

char bracket[MAXN];

bool is_left(char c) {
    if (c == '(' || c == '[' || c == '<') return true;
    else return false;
}

bool is_pair(char l, char r) {
    if (l == '(' && r == ')') return true;
    if (l == '[' && r == ']') return true;
    if (l == '<' && r == '>') return true;
    return false;
}

int main() {
    string S;
    cin >> S;
    bool possible = true;
    int next = 0;
    for (int i = 0; i < S.size(); i++) {
        if (is_left(S[i])) {
            bracket[next] = S[i];
            next++;
        }
        else if (next != 0 && is_pair(bracket[next - 1], S[i])) next--;
        else {
            possible = false;
            break;
        }
    }
    if (possible && next == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}