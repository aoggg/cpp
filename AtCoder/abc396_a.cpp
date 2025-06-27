// Atcoder abc396_a
// 2025-06-27

#include <iostream>
using namespace std;

const int MAXN = 105;

int A[MAXN];

int main() {
    int N;
    cin >> N;
    bool checked = false;
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N - 2; i++) {
        if (A[i] == A[i + 1] && A[i + 1] == A[i + 2]) {
            checked = true;
            break;
        }
    }
    if (checked) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}