// Atcoder abc384_d
// 2024-12-27

#include <iostream>
#include <map>
using namespace std;
using ll = long long;
using mp = map<ll, bool>;

const int MAXN = 2e5 + 5;

int main() {
    ll N, S;
    scanf("%lld%lld", &N, &S);
    ll A[MAXN];
    mp sum;
    ll prefix[MAXN];
    prefix[0] = 0;
    sum[prefix[0]] = true;
    for (int i = 1; i <= N; i++) {
        scanf("%lld", A + i);
        prefix[i] = prefix[i - 1] + A[i];
        sum[prefix[i]] = true;
    }
    bool mid;
    if (S >= prefix[N]) {
        mid = false;
        S %= prefix[N];
    }
    else mid = true;
    ll last = prefix[N] - S;
    bool check = false;
    for (int i = 0; i <= N; i++) {
        if (mid && sum[prefix[i] + S]) {
            check = true;
            break;
        }
        if (!mid && (sum[prefix[i] + last] || sum[prefix[i] + S])) {
            check = true;
            break;
        }
    }
    if (check || S == 0) puts("Yes");
    else puts("No");
    return 0;
}