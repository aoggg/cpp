#include<iostream>
using namespace std;

string magic, test;

int main(){
	while ( getline ( cin, magic ) ){
		test = "";
		bool is_powerful = true;
		for ( int i = 0; i < magic.size(); i++ ){
			if ( magic[i] >= 'a' && magic[i] <= 'z' ){
				test += magic[i];
			}
			else if ( magic[i] >= 'A' && magic[i] <= 'Z' ){
				test += magic[i] - 'A' + 'a';
			}
		}
		for ( int i = 0; i < test.size() / 2; i++ ){
			if ( test[i] != test[test.size() - 1 - i] ){
				is_powerful = false;
			}
		}
		if ( is_powerful ){
			cout << "SETUP! ";
		}
		cout << magic << '\n';
	}
	return 0;
}
