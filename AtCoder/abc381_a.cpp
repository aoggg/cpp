// Atcoder abc381_a
// 2025-01-02

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    bool check = true;
    if (N % 2 == 0) check = false;
    for (int i = 0; i < (N + 1) / 2 - 1 && check; i++) 
        if (S[i] != '1') check = false;
    if (S[(N + 1) / 2 - 1] != '/') check = false;
    for (int i = (N + 1) / 2; i < N && check; i++)
        if (S[i] != '2') check = false;
    if (check) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}