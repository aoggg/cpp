#include<iostream>
using namespace std;

string s, ans;

int main(){
	ans = "";
	getline ( cin, s );
	for ( int i = 0; i < s.size(); i++ ){
		if ( s[i] >= 'A' && s[i] <= 'Z' ){
			s[i] = s[i] - 'A' + 'a';
		}
	}
	for ( int i = 0; i < s.size(); i++ ){
		if ( s[i] == 'a' ){
			ans += '@';
		}
		else if ( s[i] == 'b' ){
			ans += '8';
		}
		else if ( s[i] == 'c' ){
			ans += '(';
		}
		else if ( s[i] == 'd' ){
			ans += "|)";
		}
		else if ( s[i] == 'e' ){
			ans += '3';
		}
		else if ( s[i] == 'f' ){
			ans += '#';
		}
		else if ( s[i] == 'g' ){
			ans += '6';
		}
		else if ( s[i] == 'h' ){
			ans += "[-]";
		}
		else if ( s[i] == 'i' ){
			ans += '|';
		}
		else if ( s[i] == 'j' ){
			ans += "_|";
		}
		else if ( s[i] == 'k' ){
			ans += "|<";
		}
		else if ( s[i] == 'l' ){
			ans += '1';
		}
		else if ( s[i] == 'm' ){
			ans += "[]\\/[]";
		}
		else if ( s[i] == 'n' ){
			ans += "[]\\[]";
		}
		else if ( s[i] == 'o' ){
			ans += '0';
		}
		else if ( s[i] == 'p' ){
			ans += "|D";
		}
		else if ( s[i] == 'q' ){
			ans += "(,)";
		}
		else if ( s[i] == 'r' ){
			ans += "|Z";
		}
		else if ( s[i] == 's' ){
			ans += '$';
		}
		else if ( s[i] == 't' ){
			ans += "']['";
		}
		else if ( s[i] == 'u' ){
			ans += "|_|";
		}
		else if ( s[i] == 'v' ){
			ans += "\\/";
		}
		else if ( s[i] == 'w' ){
			ans += "\\/\\/";
		}
		else if ( s[i] == 'x' ){
			ans += "}{";
		}
		else if ( s[i] == 'y' ){
			ans += "`/";
		}
		else if ( s[i] == 'z' ){
			ans += '2';
		}
		else{
			ans += s[i];
		}
	}
	cout << ans << '\n';
	return 0;
}
