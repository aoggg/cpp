#include<iostream>
using namespace std;

int ans[100000];

int main(){
	int a, b;
	cin >> a >> b;
	ans[0] = 0;
	for ( int i = 1; i <= a; i++ ){
		ans[i] = ans[i / b] + 1;
	}
	cout << ans[a] << '\n';
	return 0;
}
