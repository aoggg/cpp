// Problem: 195 - Anagram 
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/external/1/195.pdf
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int last[26][2];
char ans[1000000];

void counting (int length, int now){
	if (now == length){
		for (int i = 0; i < length; i++){
			cout << ans[i];
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < 26; i++){
		for (int j = 0; j < 2; j++){
			if (last[i][j]){
				last[i][j]--;
				if (j == 0){
					ans[now] = 'A' + i;
				}
				else {
					ans[now] = 'a' + i;
				}
				counting (length, now + 1);
				last[i][j]++;
			}
		}
	}
	return;
}

int main(){
	int n;
	cin >> n;
	for (int time = 0; time < n; time++){
		string s;
		cin >> s;
		for (int i = 0; i < 26; i++){
			for (int j = 0; j < 2; j++){
				last[i][j] = 0;
			}
		}
		for (int i = 0; i < s.size(); i++){
			if (s[i] <= 'Z'){
				last[s[i] - 'A'][0]++;
			}
			else {
				last[s[i] - 'a'][1]++;
			}
		}
		counting (s.size(), 0);
	}
	return 0;
}