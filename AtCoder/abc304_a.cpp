// Atcoder abc304_a
// 2024-12-28

#include <iostream>
using namespace std;

const int MAXN = 105;

int main() {
    int N;
    cin >> N;
    string S[MAXN];
    int A[MAXN];
    int st = 0;
    int age = 0;
    for (int i = 0; i < N; i++) {
        cin >> S[i] >> A[i];
        if (i == 0) age = A[i];
        if (A[i] < age) {
            st = i;
            age = A[i];
        }
    }
    for (int i = 0; i < N; i++) {
        cout << S[(st + i) % N] << '\n';
    }
    return 0;
}