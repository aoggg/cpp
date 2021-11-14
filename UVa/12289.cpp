#include<iostream>
using namespace std;

bool com ( string s, const string COMPARE ){
	int wrong = 0;
	for ( int i = 0; i < s.size(); i++ ){
		if ( s[i] != COMPARE[i] ){
			wrong++;
		}
	}
	return wrong <= 1;
}

string letter;

int main(){
	int N;
	cin >> N;
	for ( int i = 0; i < N; i++ ){
		cin >> letter;
		if ( com ( letter, "one" ) ){
			cout << "1\n";
		}
		else if ( com ( letter, "two" ) ){
			cout << "2\n";
		}
		else {
			cout << "3\n";
		}
	}
	return 0;
}
