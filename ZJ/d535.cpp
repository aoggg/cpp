#include<iostream>
using namespace std;

int main(){
	string s;
	bool have_secret = true;
	cin >> s;
	for ( int i = 0; i < s.size() / 2; i++ ){
		if ( s[i] != s[s.size() - i - 1] ){
			have_secret = false;
			break;
		}
	}
	int num, front;
	num = s[0] - '0'; 
	for ( int i = 1; i < s.size() && have_secret; i++ ){
		front = num;
		num = s[i] - '0';
		if ( num > front * 2 ){
			have_secret = false;
			break;
		}
	}
	bool have_even = false;
	string ans = "";
	for ( int i = 0; i < s.size() && have_secret; i++ ){
		num = s[i] - '0';
		if ( num % 2 == 0 ){
			have_even = true;
			ans += s[i];
		}
	}
	if ( !have_secret ){
		cout << "INCORRECT\n";
	}
	else if ( !have_even ){
		cout << 0 << '\n';
	}
	else {
		cout << ans << '\n';
	}
	return 0;
}

