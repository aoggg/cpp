// Problem: Subarray Sums II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1661/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<map>
using namespace std;

map <long long, long long> num;  // 前面 -> 值 後面 -> 出現次數
long long arr[200000], sum[200000];

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	long long n, x;
	cin >> n >> x;
	long long ans = 0;
	num[0]++;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		if (i == 0){
			sum[0] = arr[0];
		}
		else {	
			sum[i] = sum[i - 1] + arr[i];
		}
		ans += num[sum[i] - x]; // 找跟他差x的前綴和有幾個?
		num[sum[i]]++;
	}
	cout << ans << '\n';
	return 0;
}