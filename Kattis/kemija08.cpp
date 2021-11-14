#include<iostream>
using namespace std;

string s, ans;

int main(){
	getline ( cin, s );
	ans = "";
	for ( int i = 0; i < s.size(); i++ ){
		ans += s[i];
		if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
			i+=2;
		}
	}
	cout << ans << '\n';
	return 0;
}
