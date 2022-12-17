// Problem: 10107 - What is the Median?
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1048
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <queue>
using namespace std;
using pqg = priority_queue<int, vector<int>, greater<int>>;
using pq = priority_queue<int>;

pqg bigger;
pq smaller;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (smaller.size() == 0) {
			smaller.push(n);
		}
		else if (smaller.top() > n) {
			bigger.push(smaller.top());
			smaller.pop();
			smaller.push(n);
		}
		else {
			bigger.push(n);
		}
		if (bigger.size() > smaller.size()) {
			smaller.push(bigger.top());
			bigger.pop();
		}
		int ans;
		if (smaller.size() > bigger.size()) {
			ans = smaller.top();
		}
		else {
			ans = (smaller.top() + bigger.top()) / 2;
		}
		printf("%d\n", ans);
	}
	return 0;
}