#include<iostream>
using namespace std;

int main(){
	long long t, x, n;
	cin >> t >> x >> n;
	if (n % x != 0){
		cout << t * (n / x + 1) << '\n';
	}
	else {
		cout << t * (n / x) << '\n';
	}
	return 0;
}
