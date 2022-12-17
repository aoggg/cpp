// Problem: D - Megalomania
// Contest: AtCoder - AtCoder Beginner Contest 131
// URL: https://atcoder.jp/contests/abc131/tasks/abc131_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

const int MAXN = 2e5 + 5;

pair<int, int> jobs[MAXN];

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a == b) {
		return false;
	}
	if (b.second < a.second) {
		return false;
	}
	if (b.second == a.second && b.first > a.first) {
	 	return false;
	}
	return true;
}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> jobs[i].first >> jobs[i].second;
	}
	sort(jobs, jobs + N, cmp);
	bool possible = true;
	for (int i = 0, times = 0; i < N; i++) {
		times += jobs[i].first;
		if (times > jobs[i].second) {
			possible = false;
			break;
		}
	}
	if (possible) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}