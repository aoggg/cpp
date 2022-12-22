#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		int n;
		cin >> n;
		int r = 7 - n % 7;
		if (n % 7 == 0){
			cout << n << '\n';
		}
		else if (n % 10 + r >= 10){
			n -= 7 - r;
			cout << n << '\n';
		}
		else {
			n += r;
			cout << n << '\n';
		}
	}
	return 0;
}
