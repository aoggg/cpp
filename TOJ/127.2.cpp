#include<iostream>
using namespace std;

string D, ans;

int main(){
	int t;
	cin >> t >> D;
	ans = D;
	for ( int i = 0; i < D.size(); i++ ){
		if ( D[i] - t < 'A' ){
			ans[i] = 'Z' - ( 'A' - D[i] + t ) + 1;
		}
		else{
			ans[i] = D[i] - t;
		}
	}
	cout << ans << '\n';
	return 0;
}
