// Problem: Static Range Sum Queries
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1646
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<vector>
using namespace std;

vector <long long> sum;

int main(){
	int n, q;
	cin >> n >> q;
	sum.push_back (0);
	for (int i = 1; i <= n; i++){
		long long x;
		cin >> x;
		sum.push_back (x + sum.back ());
	}
	for (int i = 0; i < q; i++){
		int a, b;
		cin >> a >> b;
		cout << sum[b] - sum[a - 1] << '\n';
	}
	return 0;
}