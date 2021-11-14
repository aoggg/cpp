#include<iostream>
using namespace std;

string s;

int main(){
	int T;
	cin >> T >> s;
	for ( int i = 0; i < T; i++ ){
		if ( s[i] >= 'A' && s[i] <= 'Z' ){
			s[i] = s[i] - 'A' + 'a';
		}
		else{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	cout << s << '\n';
	return 0;
}
