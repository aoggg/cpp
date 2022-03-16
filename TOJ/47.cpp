#include<iostream>
#include<algorithm>
using namespace std;

int X[1000000];

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> X[i];
	}
	sort (X, X + n);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		int K;
		cin >> K;
		int l = 0, r = n - 1, ansL = -1, ansR = -1;
		bool found = false;
		while (l <= r){
			int m = (l + r) / 2;
			if (X[m] == K){
				found = true;
				break;
			}
			else if (X[m] < K){
				l = m + 1;
				ansL = X[m];
			}
			else {
				r = m - 1;
				ansR = X[m];
			}
		}
		if (found){
			cout << K << '\n';
		}
		else {
			if (ansL == -1){
				cout << "no ";
			}
			else {
				cout << ansL << ' ';
			}
			if (ansR == -1){
				cout << "no\n";
			}
			else {
				cout << ansR << '\n';
			}
		}
	}
	return 0;
}