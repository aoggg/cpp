// Problem: Programmers and Artists
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2426
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include <iostream>
#include <set>
#include <queue>
#include <utility>
#include <algorithm>
#define ll long long
using namespace std;

multiset<pair<ll, ll>> art, last;
priority_queue<ll, vector<ll>, greater<ll>> lastProgrammer; 
pair<ll, ll> ability[200000];

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
	if (a.second > b.second) {
		return true;
	}
	return false;
}

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	for (int i = 0; i < n; i++) {
		ll x = 0, y = 0;
		cin >> x >> y;
		ability[i] = {y, x};
	}
	sort(ability, ability + n, cmp);
	ll sumA = 0;
	for (int i = 0; i < a; i++) {
		lastProgrammer.push(ability[i].second - ability[i].first);
		sumA += ability[i].second;
	}
	for (int i = a; i < n; i++) {
		art.insert(ability[i]);
	}
	// cout << "hello\n";
	for (int i = 0; i < n - (a + b); i++) {
		pair<ll, ll> num = *art.begin();
		art.erase(art.find(num));
		last.insert(num);
	}
	// cout << "hello\n";
	ll ans = 0;
	ll sumB = 0;
	for (auto i = art.begin(); i != art.end(); ++i) {
		sumB += i->first;
	}
	ans = sumA + sumB;
	for (int i = a; i < a + b; i++) {
		pair<ll, ll> next = ability[i];
		sumA += next.second;
		lastProgrammer.push(next.second - next.first);
		sumA -= lastProgrammer.top();
		lastProgrammer.pop();
		auto f = art.find(next);
		if (f != art.end()) {
			art.erase(f);
			sumB -= next.first;
		}
		else {
			pair<ll, ll> num = *art.begin();
			art.erase(art.begin());
			last.insert(num);
			sumB -= num.first;
		}
		ans = max(sumA + sumB, ans);
	}
	cout << ans << '\n';
	return 0;
}