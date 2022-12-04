// Problem: H. 名次數列
// Contest: Codeforces - Ten Point Round #8 (Div. 2)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/320147/problem/H
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> place, num;

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int n;
	cin >> n;
	for (int time = 0; time < n; time++){
		int m;
		cin >> m;
		place.clear ();
		num.clear ();
		for (int i = 0; i < m; i++){
			int a;
			cin >> a;
			num.push_back (a);
			place.push_back (a);
		}
		sort (place.begin (), place.end ());
		place.resize (unique (place.begin (), place.end ()) - place.begin ());
		for (int i = 0; i < m; i++){
			int ans, l = 0, r = place.size () - 1;
			while (l <= r){
				int m = (l + r) / 2;
				if (place[m] == num[i]){
					ans = m + 1;
					break;
				}
				else if (place[m] < num[i]){
					l = m + 1;
				}
				else {
					r = m - 1;
				}
			}
			if (i != 0){
				cout << ' ';
			}
			cout << ans;
		}
		cout << '\n';
	}
	return 0;
}