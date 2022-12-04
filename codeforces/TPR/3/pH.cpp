// Problem: H. 獨一無二的完美數列
// Contest: Codeforces - Ten Point Round #3 (Div. 2)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/301881/problem/H
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<set>
using namespace std;

set <string> a;

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		string num;
		cin >> num;
		a.insert (num);
	}
	if (a.size () == N){
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}