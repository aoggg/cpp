#include<iostream>
using namespace std;

long long GCD (long long a, long long b){
	if (a == 0 || b == 0){
		return a + b;
	}
	return GCD (b, a % b);
}

long long LCM (long long a, long long b){
	return a * b / GCD (a, b);
}

int main(){
	long long n, ans = 1, p;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> p;
		ans = LCM (ans, p);
	}
	cout << ans << '\n';
	return 0;
}
