#include<iostream>
using namespace std;

int a[200000];

int main(){
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int moved = 0;
		for (int i = 1; i < n - 1; i++){
			if (a[i] > a[i - 1] && a[i] > a[i + 1]){
				a[i + 1] = max (a[i], a[i + 2]);
				moved++;
			}
		}
		cout << moved << '\n';
		for (int i = 0; i < n; i++){
			if (i != 0){
				cout << ' ';
			}
			cout << a[i];
		}
		cout << '\n';
	}
	return 0;
}
