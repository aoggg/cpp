// Problem: 11351 - Last Man Standing
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2326
// Memory Limit: 32 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MAXN = 1e5 + 5;

int main() {
	int t;
	scanf("%d", &t); 
    for (int cases = 1; cases <= t; cases++) {
	    int n, k;
	    scanf("%d%d", &n, &k);
	    int ans = 0;
	    for (int i = 1; i <= n; i++) {
	    	ans = (ans + k) % i;
	    }
	    printf("Case %d: %d\n", cases, ans + 1);
	}
    return 0;
}