#include<iostream>
using namespace std;

string s;

int main(){
	cin >> s;
	bool is_hiss = false;
	for ( int i = 0; i < s.size() - 1; i++ ){
		if ( s[i] == 's' && s[i + 1] == 's' ){
			is_hiss = true;
		}
	}
	if ( is_hiss ){
		cout << "hiss\n";
	}
	else{
		cout << "no hiss\n";
	}
	return 0;
}
