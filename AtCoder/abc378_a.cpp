// Atcoder abc378_b
// 2025-01-17

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 5;

int A[MAXN];

int main() {
    for (int i = 0; i < 4; i++) scanf("%d", A + i);
    sort(A, A + 4);
    int ans = 0;
    for (int i = 0; i + 1 < 4; i++) {
        if (A[i] == A[i + 1]) {
            ans++;
            i++;
        }
    }
    printf("%d\n", ans);
    return 0;
}