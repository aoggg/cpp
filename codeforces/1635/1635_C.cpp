#include<iostream>
using namespace std;

int a[200000];

int main(){
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		int n;
		cin >> n;
		bool sorted = true;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (i > 0 && a[i] < a[i - 1]){
				sorted = false;
			}
		}
		if (sorted){
			cout << 0 << '\n';
			continue;
		}
		if (a[n - 1] < 0 || a[n - 1] < a[n - 2]){
			cout << -1 << '\n';
			continue;
		}
		cout << n - 2 << '\n';
		for (int i = 0; i < n - 2; i++){
			cout << i + 1 << ' ' << n - 1 << ' ' << n << '\n';
		}
	}
	return 0;
}
