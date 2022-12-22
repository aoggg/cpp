#include<iostream>
using namespace std;

int x[100000], y[100000], close[100000];

int main(){
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		int n, k;
		cin >> n >> k;
		for (int i = 0; i < n; i++){
			cin >> x[i] >> y[i];
			for (int j = 0; j < i; j++){
				if (abs (x[i] - x[j]) + abs (y[i] - y[j]) <= k){
					close[i]++;
					close[j]++;
				}
			}
		}
		bool possible = false;
		for (int i = 0; i < n; i++){
			if (close[i] == n - 1){
				possible = true;
			}
			close[i] = 0;
		}
		if (possible){
			cout << 1 << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}
	return 0;
} 
