#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	int times = 1;
	while ( times <= t ){
		int n, m;
		cin >> n >> m;
		cout << ( n / 3 ) * ( m / 3 ) << '\n';
		times++;
	}
	return 0;
}
