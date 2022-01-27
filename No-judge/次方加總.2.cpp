#include<iostream>
using namespace std;

int num[1000];

int main (){
	int a, b;
	cin >> a >> b;
	num[0] = 1;
	int ans = 1;
	for ( int i = 1; i <= b; i++ ){
		num[i] = num[i - 1] * a;
		ans += num[i];
	}
	cout << ans << '\n';
	return 0;
}
