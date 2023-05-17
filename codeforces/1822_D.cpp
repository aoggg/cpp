// Problem: D. Super-Permutation
// Contest: Codeforces - Codeforces Round 867 (Div. 3)
// URL: https://codeforces.com/contest/1822/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <iostream>
using namespace std;

int main(){
	int t;
    scanf("%d", &t);
    while (t--) {
    	int n;
    	scanf("%d", &n);
    	int sum = 0;
    	for (int i = 1; i <= n; i++) {
    	    sum = (sum + i) % n;
    	}
    	if (sum % n == 0 && n != 1) {
      	    puts("-1");
    	}
    	else {
			printf("%d", n);
    	    for (int i = 1; i <= n / 2; i++) {
    	      if (i % 2 == 0) printf(" %d", i);
    	      else printf(" %d", n - i);
    	    }
        for (int i = n / 2; i >= 1; i--) {
            if (n - i == i) continue;
            if (i % 2 == 0) printf(" %d", n - i);
            else printf(" %d", i);
        }
        puts("");
    }
  }
  return 0;
}