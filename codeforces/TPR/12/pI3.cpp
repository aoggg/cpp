// Problem: I3. Colten 的完美道路差值 (Colten's perfect road difference)【Hard Version】
// Contest: Codeforces - Ten Point Round #12 (Div. 3)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/339497/problem/I3
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> dev, circle;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int c;
		cin >> c;
		circle.push_back (c);
		for (int j = 0; j < i; j++){
			dev.push_back (abs (circle[i] - circle[j]));
			dev.push_back (0 - abs (circle[i] - circle[j]));
		}
	}
	sort (dev.begin (), dev.end ());
	int Q;
	cin >> Q;
	for (int time = 0; time < Q; time++){
		int P;
		cin >> P;
		bool found = false;
		int l = 0, r = dev.size() - 1;
		while (l <= r){
			int m = (l + r) / 2;
			if (dev[m] == P){
				found = true;
				break;
			}
			else if (dev[m] < P){
				l = m + 1;
			}
			else {
				r = m - 1;
			}
		}
		if (found){
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
	return 0;
}