#include<iostream>
using namespace std;

int main(){
	string s;
	while ( getline ( cin, s ) ){
		int ans = 0;
		for ( int i = 0; i < s.size(); i++ ){
			if ( s[i] >= '0' && s[i] <= '9' ){
				ans += s[i] - '0';
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
