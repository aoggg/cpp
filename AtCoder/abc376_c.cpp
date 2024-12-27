// Atcoder abc376_c
// 2024-12-25

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 2e5 + 5;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int N;
    scanf("%d", &N);
    int A[MAXN], B[MAXN];
    for (int i = 0; i < N; i++) scanf("%d", A + i);
    for (int i = 0; i < N - 1; i++) scanf("%d", B + i);
    sort(A, A + N, cmp);
    sort(B, B + N - 1, cmp);
    int ap = 0, bp = 0;
    bool check = true;
    int ans = A[N - 1];
    for (ap = 0; ap < N && bp < N - 1; ap++) {
        if (A[ap] <= B[bp]) {
            bp++;
        }
        else {
            if (ans != A[N - 1]) ans = A[ap];
            else {
                check = false;
                break;
            }
        }
    }
    if (check) printf("%d\n", ans);
    else puts("-1");
    return 0;
}