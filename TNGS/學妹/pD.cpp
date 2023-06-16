// Problem: D. 微積分
// Contest: Codeforces - 選幹考好欸
// URL: https://codeforces.com/gym/445760/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

map<int, ll> num;
int f[MAXN];
bool appeared[MAXN];

int main() {
    int n;
    scanf("%d", &n);
    int m = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (!appeared[b]) {
            f[m] = b;
            m++;
            appeared[b] = true;
        }
        num[b] += a;
    }
    sort(f, f + m);
    int op;
    scanf("%d", &op);
    if (op == 1) {
        for (int i = 0; i < m; i++) {
            if (num[f[i]] * f[i] == 0) continue;
            printf("%lld %d\n", f[i] * num[f[i]], f[i] - 1);
        }
    }
    else {
        for (int i = 0; i < m; i++) {
            if (num[f[i]] == 0) continue;
            printf("%lld %d\n", num[f[i]] / (f[i] + 1), f[i] + 1);
        }
    }
    return 0;
}