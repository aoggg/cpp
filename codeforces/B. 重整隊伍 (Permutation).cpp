// Problem: B. 重整隊伍 (Permutation)
// Contest: Codeforces - 國立新化高級中學 111 學年度學科能力競賽 資訊科 TEST
// URL: https://codeforces.com/gym/394748/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

pair<pair<int, int>, int> people[200001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		people[i].second = i + 1;
		cin >> people[i].first.second;
	}
	for (int i = 0; i < n; i++) {
		cin >> people[i].first.first;
	}
	sort(people, people + n);
	for (int i = n - 1; i >= 0; i--) {
		if (i != n - 1) {
			cout << ' ';
		}
		cout << people[i].second;
	}
	cout << '\n';
	return 0;
}