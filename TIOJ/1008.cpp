#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <numeric>
#pragma GCC optimize("Ofast")
using namespace std;

queue<vector<int>> water;
map <vector<int>, int> cup;
int m[5];

int main() {
	int n;
	cin >> n;
	int GCD = 0;
	vector<int> now, next;
	int large = 0;
	for (int i = 0; i < n; i++) {
		cin >> m[i];
		GCD = gcd(GCD, m[i]);
		large = max(large, m[i]);
		now.push_back(0);
	}
	cup[now] = 0;
	water.push(now);
	int t;
	cin >> t;
	if (t % GCD != 0 || t > large) {
		cout << -1 << '\n';
		return 0;
	}
	int ans;
	while (water.size() != 0) {
		now = water.front();
		water.pop();
		for (int i = 0; i < n; i++) {
			if (now[i] == t) {
				ans = cup[now];
				goto end;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				next = now;
				if (i == j) { //如果一樣就讓他倒掉或是填滿
					next[i] = 0;
					if (!cup.count(next)) {
						cup[next] = cup[now] + 1;
						water.push(next);
					}
					next[i] = m[i];
					if (!cup.count(next)) {
						cup[next] = cup[now] + 1;
						water.push(next);
					}
				}
				else {
					if (m[i] - now[i] > now[j]) {
						next[i] += next[j];
						next[j] = 0;
					}
					else {
						next[i] = m[i];
						next[j] -= m[i] - now[i];
					}
					if (!cup.count(next)) {
						cup[next] = cup[now] + 1;
						water.push(next);
					}
				}
			}
		}
	}
	end:
		cout << ans << '\n';
		return 0;
}