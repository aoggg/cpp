#include<iostream>
using namespace std;

string s, ans;

int main(){
	cin >> s;
	ans = "";
	for ( int i = 0; i < s.size(); i++ ){
		if ( i == 0 ){
			ans += s[i];
		}
		else if ( s[i] == '-' ){
			ans += s[i + 1];
		}
	}
	cout << ans << '\n';
	return 0;
}
