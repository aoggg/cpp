// Problem: 11084 - Anagram Division
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2025
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<string>
using namespace std;

long long ans, d;
int last[10];

void counting (long long num, long long now, long long l){
	if (now == l){
		if (num % d == 0){
			ans++;
		}
		return;
	}
	for (int i = 0; i < 10; i++){
		if (last[i]){
			num = num * 10 + i;
			last[i]--;
			counting (num, now + 1, l);
			last[i]++;
			num /= 10;
		}
	}
}

int main(){
	int T;
	cin >> T;
	for (int time = 0; time < T; time++){
		string s;
		ans = 0;
		cin >> s >> d;
		for (int i = 0; i < 10; i++){
			last[i] = 0;
		}
		for (int i = 0; i < s.size(); i++){
			last[s[i] - '0']++;
		}
		counting (0, 0, s.size());
		cout << ans << '\n';
	}
	return 0;
}