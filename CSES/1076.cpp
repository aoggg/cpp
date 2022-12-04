// Problem: Sliding Median
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1076
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<iostream>
#include<set>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
 
multiset <int> l, r; //l -> 左半邊, r -> 右半邊
vector <int> num;
 
void add_new (int n){
	if (l.size() == r.size()){
		if (l.size() == 0 || *--l.end() >= n){
			l.insert (n);
		}
		else {
			r.insert (n);
		}
	} 
	else if (l.size() > r.size()){
		multiset <int>::iterator moved = --l.end();
		if (*moved >= n){
			r.insert (*moved);
			l.erase (moved);
			l.insert (n);
		}
		else {
			r.insert (n);
		}
	}
	else {
		multiset <int>::iterator moved = r.begin();
		if (*moved < n){
			l.insert (*moved);
			r.erase (moved);
			r.insert (n);
		}
		else {
			l.insert (n);
		}
	}
}
 
int main(){
	int n, k;
	cin >> n >> k;
	bool FT = true;
	for (int time = 0; time < n; time++){
		int x;
		cin >> x;
		num.push_back (x);
		if (num.size() > k){
			multiset <int>::iterator fl = l.find (num[time - k]), fr = r.find (num[time - k]);
			if (fl != l.end()){
				l.erase (fl);
			}
			else {
				r.erase (fr);
			}
		}
		add_new (x);
		if (time >= k - 1){
			if (!FT){
				cout << ' ';
			} 
			FT = false;
			if (k % 2 == 0){
				cout << *--l.end();
			}
			else if (r.size() > l.size()){
				cout << *r.begin();
			}
			else {
				cout << *--l.end();
			}
		}
	}
	cout << '\n';
	return 0;
}