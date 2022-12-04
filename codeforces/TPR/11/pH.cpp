// Problem: H. 藤原千花與字串 (Chika Fujiwara and string)
// Contest: Codeforces - Ten Point Round #11 (Div. 2)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/333897/problem/H
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<set>
#include<iterator>
using namespace std;

set <string> word;

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie ();
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		string s;
		cin >> s;
		if (word.count (s)){ // 如果原本就已經有的話
			cout << s << '\n';
			continue;
		}
		auto place = word.insert (s).first;
		if (place == word.begin ()){ // 寫的是最小的單詞
			cout << -1 << '\n';
		}
		else {
			cout << *prev (place) << '\n';
		}
	}
	return 0;
}