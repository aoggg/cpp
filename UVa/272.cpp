#include<iostream>
using namespace std;

string s, ans; 

int main(){
	bool is_left = true;
	while ( getline ( cin, s ) ){
		for ( int i = 0; i < s.size(); i++ ){
			if ( s[i] == '"' ){
				if ( is_left ){
					ans += "``";
				}
				else{
					ans += "''";
				}
				is_left = !is_left; 
			}
			else{
				ans += s[i];
			}
		}
		cout << ans << '\n';
		ans = "";
	}
	return 0;
}
