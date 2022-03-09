#include<iostream>
using namespace std;

int hour[10001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int h1, h2;
		cin >> h1 >> h2;
		hour[h1]++;
		hour[h2]--; 
	}
	int total = 0, ans = 0;
	for (int i = 1; i <= 10000; i++){
		total += hour[i];
		ans = max (ans, total);
	}
	cout << ans << '\n';
	return 0;
}
