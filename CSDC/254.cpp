#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
using ll = long long;

map<ll, bool> appeared;
vector<ll> ans;

int main()
{
    ll N;
    scanf("%lld", &N);
    for (ll i = 1; i * i * i <= N; i++) {
        if (N % i == 0) {
            if (N % (i * i) == 0) {
                if (!appeared[i * i]) {
                    appeared[i * i] = true;
                    ans.push_back(i * i);
                }
            }
            ll j = N / i;
            ll sj = sqrtl(j);
            if (sj * sj == j) {
                if (!appeared[j]) {
                    appeared[j] = true;
                    ans.push_back(j);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        if (i != 0) printf(" ");
        printf("%lld", ans[i]);
    }
    puts("");
    return 0;
}