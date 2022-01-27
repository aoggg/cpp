#include<iostream>
using namespace std;

int f[10000];

int main(){
	int n, m;
	cin >> n >> m;
	f[0] = 0;
	f[1] = 1;
	for ( int i = 2; i <= n; i++ ){
		f[i] = (f[i - 1] + f[i - 2]) % m;
	}
	cout << f[n] << '\n';
	return 0;
}
