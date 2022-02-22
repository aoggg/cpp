#include<iostream>
using namespace std;

int a[100];

int main(){
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (i != 0){
				a[i] = a[i - 1] | a[i];
			}
		}
		cout << a[n - 1] << '\n';
	}
	return 0;
}
