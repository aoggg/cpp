// Problem: C. 中位數
// Contest: Codeforces - Ten Point Round #7 (Div. 1)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/316436/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<set>
#include<iterator>
using namespace std;

multiset <int> L, R; //L -> 中間以左; R -> 中間以右

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int n;
	while (cin >> n){
		if (n == 0){
			break;
		}
		if (L.size() == R.size()){ //左右長度一樣
			if (L.size() == 0 || *L.rbegin() >= n){
				L.insert (n);
				cout << *L.rbegin() << '\n';
			}
			else {
				R.insert (n);
				cout << *R.begin() << '\n';
			}
		}
		else {
			if (L.size() > R.size()){ // 左邊ㄉ比較多
				multiset <int>::iterator num = --L.end();
				if (*num >= n){
					R.insert (*num);
					L.erase (num);
					L.insert (n);
				}
				else {
					R.insert (n);
				}
			}
			else {
				multiset <int>::iterator num = R.begin();
				if (*num < n){
					L.insert (*num);
					R.erase (num);
					R.insert (n);
				}
				else {
					L.insert (n);
				}
			}
			multiset <int>::iterator midl = --L.end(), midr = R.begin();
			cout << (*midl + *midr) / 2 << '\n';
		}
	}
	return 0;
}