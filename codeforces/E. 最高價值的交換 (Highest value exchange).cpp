// Problem: E. 最高價值的交換 (Highest value exchange)
// Contest: Codeforces - Ten Point Round #10 (Div. 1 + Div. 2)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/329984/problem/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<queue>
using namespace std;

priority_queue <long long> J, V;

int main(){
	int n;
	cin >> n;
	long long vtoj = 0, jtov = 0;
	for (int i = 0; i < n; i++){
		long long a, b, change;
		cin >> a >> b >> change;
		J.push (a);
		V.push (b);
		if (change){
			long long Vmax = V.top (), Jmax = J.top ();
			vtoj += Vmax;
			jtov += Jmax;
			V.pop ();
			J.pop ();
			V.push (Jmax);
			J.push (Vmax);
		}
	}
	cout << vtoj << ' ' << jtov << '\n';
	return 0;
}