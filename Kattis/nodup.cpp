#include<iostream>
using namespace std;

string word[85], s;

int main(){
	getline ( cin, s );
	int i = 0;
	for ( int j = 0; j < s.size(); j++ ){
		if ( s[j] == ' ' ){
			i++;
		}
		else{
			word[i] += s[j];
		}
	}
	bool is_repeat = false;
	for ( int j = 1; j <= i; j++ ){
		for ( int k = 0; k < j; k++ ){
			if ( word[k] == word[j] ){
				is_repeat = true;
				break;
			}
		}
		if ( is_repeat ){
			break;
		}
	}
	if ( is_repeat ){
		cout << "no\n";
	}
	else{
		cout << "yes\n";
	}
	return 0;
}
