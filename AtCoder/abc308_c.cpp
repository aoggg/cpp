// Problem: C - Standings
// Contest: AtCoder - AtCoder Beginner Contest 308
// URL: https://atcoder.jp/contests/abc308/tasks/abc308_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
using ll = long long;
using ppi = pair<pair<ll, ll>, int>;

const int MAXN = 2e5 + 5;
const double EPS = 1e-9;

ppi people[MAXN];

bool cmp(ppi a, ppi b) {
	if (a.first.first * b.first.second == b.first.first * a.first.second) return a.second < b.second;
	else return a.first.first * b.first.second > b.first.first * a.first.second;
}

int main() {
	int N;
	cin >> N;
	int A, B;
	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		people[i].first.first = A;
		people[i].first.second = A + B;
		people[i].second = i + 1;
	}
	sort (people, people + N, cmp);
	for (int i = 0; i < N; i++) {
		cout << people[i].second;
		if (i != N - 1) cout << ' ';
	}
	cout << '\n';
	return 0;
}