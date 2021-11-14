#include<iostream>
using namespace std;

string news[] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2" };
string s, ans = "";

int main(){
	getline ( cin, s );
	for ( int i = 0; i < s.size(); i++ ){
		if ( s[i] >= 'A' && s[i] <= 'Z' ){
			s[i] = s[i] - 'A' + 'a';
		}
	}
	for ( int i = 0; i < s.size(); i++ ){
		if ( s[i] >= 'a' && s[i] <= 'z' ){
			ans += news[s[i] - 'a'];
		}
		else{
			ans += s[i];
		}
	}
	cout << ans << '\n';
	return 0;
}
