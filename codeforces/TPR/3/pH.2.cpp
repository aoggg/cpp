// Problem: H. 獨一無二的完美數列
// Contest: Codeforces - Ten Point Round #3 (Div. 2)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/301881/problem/H
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
#include <map>
using namespace std;

const int MAXN = 1e6 + 5;

map<string, bool> appeared;

int main() {
	int N;
	scanf("%d", &N);
	bool perfect = true;
	for (int i = 0; i < N; i++) {
		char c[105];
		scanf("%s", c);
		string num = c;
		if (appeared[num]) {
			perfect = false;
		}
		appeared[num] = true;
	}
	if (perfect) {
		puts("Yes");
	}
	else {
		puts("No");
	}
	return 0;
}