#include<iostream>
using namespace std;

int main(){
	long long k1, k2, k3;
	long long n;
	cin >> n >> k1 >> k2 >> k3;
	k1 -= k1 / 3;
	k2 -= k2 / 3;
	k3 -= k3 / 3;
	cout << n * (k1 + k2 + k3) << '\n';
	return 0;
}
