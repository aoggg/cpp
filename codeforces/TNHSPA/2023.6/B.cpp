// Problem: B. 商店
// Contest: Codeforces - 台南高中競技程式練盟練習賽-六月場
// URL: https://codeforces.com/group/vyc3POHHoZ/contest/447836/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

struct Info {
	int pos;
	int dis;
	ll cost;
} customer[MAXN];

map<int, ll> line;
map<int, bool> appeared;
vector<int> node;

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &customer[i].pos);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &customer[i].dis);
	}
	for (int i = 0; i < n; i++) {
		scanf("%lld", &customer[i].cost);
		int l = customer[i].pos - customer[i].dis;
		int r = customer[i].pos + customer[i].dis + 1;
		int cost = customer[i].cost;
		if (!appeared[l]) node.push_back(l);
		if (!appeared[r]) node.push_back(r);
		appeared[l] = appeared[r] = true;
		line[l] += cost;
		line[r] -= cost;
	}
	sort(node.begin(), node.end());
	ll cur = 0;
	ll ans = -1e18;
	for (int i = 0; i < node.size(); i++) {
		cur += line[node[i]];
		ans = max(ans, cur);
	}
	printf("%lld\n", ans);
	return 0;
}