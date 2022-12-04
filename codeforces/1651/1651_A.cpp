#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		int n;
		cin >> n;
		int player = 1;
		for (int i = 0; i < n; i++){
			player *= 2;
		}
		cout << player - 1 << '\n';
	}
	return 0;
}
