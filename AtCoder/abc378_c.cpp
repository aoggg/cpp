// Atcoder abc378_c
// 2025-01-17

#include <iostream>
#include <map>
using namespace std;
using mp = map<int, int>;

const int MAXN = 2e5 + 5;

int A[MAXN];

int main() {
    int N;
    scanf("%d", &N);
    mp lp;
    for (int i = 1; i <= N; i++) {
        if (i != 1) printf(" ");
        scanf("%d", A + i);
        if (lp[A[i]] == 0) printf("-1");
        else printf("%d", lp[A[i]]);
        lp[A[i]] = i;
    }
    puts("");
    return 0;
}