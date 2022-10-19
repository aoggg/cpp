// Problem: D. 刪除遊戲 (Game)
// Contest: Codeforces - 國立新化高級中學 111 學年度學科能力競賽 資訊科 TEST
// URL: https://codeforces.com/gym/394748/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <map>
#include <utility>
using namespace std;

map<int, int> times;
int n;
int ans;

void counter(int num) {
	for (int i = 1; i * i <= num; i++) {
		if (num % i == 0) {
			times[i]++;
			if (times[i] >= n - 2 && i > ans) {
				ans = i;
			}
			if (i * i != num) {
				times[num / i]++;
				if (times[num / i] >= n - 2 && (num / i) > ans) {
					ans = num / i;
				}
			}
		}
	}
}

int main() {
	cin >> n;
	ans = 1;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		counter(num);
	}
	cout << ans << '\n';
	return 0;
}