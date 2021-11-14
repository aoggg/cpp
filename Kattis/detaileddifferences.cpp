#include<iostream>
using namespace std;

string line1, line2, ans;

int main(){
	int n;
	cin >> n;
	for ( int i = 1; i <= n; i++ ){
		cin >> line1 >> line2;
		for ( int i = 0; i < line1.size(); i++ ){
			if ( line1[i] != line2[i] ){
				ans += '*';
			}
			else{
				ans += '.';
			}
		}
		cout << line1 << '\n';
		cout << line2 << '\n';
		cout << ans << '\n';
		ans = "";
	}
	return 0;
}
