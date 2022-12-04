// Problem: Creating Strings
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1622
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<map>
#include<vector>
using namespace std;

map <char, int> appeared;
vector <string> sans;
int ans = 0, length;

void counting (string s, int steps){
	if (steps == length){
		sans.push_back (s);
		ans++;
		return ;
	}
	for (char i = 'a'; i <= 'z'; i++){
		if (appeared[i] != 0){
			appeared[i]--;
			counting (s + i, steps + 1);
			appeared[i]++;
		}
	}
	return ;
}

int main(){
	string S;
	cin >> S;
	length = S.size();
	for (int i = 0; i < length; i++){
		appeared[S[i]]++;
	}
	counting ("", 0);
	cout << ans << '\n';
	for (int i = 0; i < sans.size(); i++){
		cout << sans[i] << '\n';
	}
	return 0;
}