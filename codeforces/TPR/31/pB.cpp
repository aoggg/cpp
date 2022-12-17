// Problem: B. 重整隊伍 (Permutation)
// Contest: Codeforces - Ten Point Round #31 (Div. 2, based on 111 學年度國立新化高級中學 學科能力競賽資訊科 - 校內初選 )
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/412932/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

const int MAXN = 2e5 + 5;

pair<int, int> people[MAXN];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%*d");
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &people[i].first);
		people[i].second = i + 1;
	}
	sort(people, people + n);
	for (int i = n - 1; i >= 0; i--) {
		if (i != n - 1) {
			printf(" ");
		}
		printf("%d", people[i].second);
	}
	puts("");
	return 0;
}