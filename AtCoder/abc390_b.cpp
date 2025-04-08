// Atcoder abc390_b
// 2025-01-25

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 105;

int main() {
    int N;
    scanf("%d", &N);
    ll A[MAXN];
    for (int i = 0; i < N; i++) scanf("%lld", A + i);
    bool check = true;
    for (int i = 1; i + 1 < N; i++) {
        if (A[i] * A[i] != A[i + 1] * A[i - 1]) {
            check = false;
            break;
        }
    }
    if (check) puts("Yes");
    else puts("No");
    return 0;
}