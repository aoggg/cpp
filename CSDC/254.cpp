#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
using ll = long long;

vector<pair<ll, int>> num;
priority_queue<ll, vector<ll>, greater<ll>> ans;

void cal(ll N) 
{
    ll tmp = N;
    for (ll i = 2; i * i <= N && N > 1; i++) {
        int n = 0;
        while (N % i == 0) {
            n++;
            N /= i;
        }
        if (n >= 2) num.push_back(make_pair(i, n));
    }
}

void dfs(int depth, ll now) {
    if (depth >= num.size()) {
        ans.push(now);
        return;
    }
    ll n = num[depth].first;
    ll tmp = 1;
    int times = num[depth].second;
    dfs(depth + 1, now);
    for (int i = 0; i < times / 2; i++) {
        tmp *= n;
        dfs(depth + 1, now * tmp * tmp);
    }
}

int main()
{
    ll N;
    scanf("%lld", &N);
    cal(N);
    dfs(0, 1);
    while (ans.size() > 0) {
        printf("%lld ", ans.top());
        ans.pop();
    }
    puts("");
    return 0;
}