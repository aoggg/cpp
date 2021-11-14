#include<iostream>
using namespace std;

string s;

int main(){
	while ( cin >> s ){
		for ( int i = 0; i < s.size(); i++ ){
			s[i] -= 7;
		}
		cout << s << '\n';
	}
	return 0;
}
