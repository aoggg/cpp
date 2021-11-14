#include<iostream>
using namespace std;

string ciphertext, key, message;

int main(){
	cin >> ciphertext >> key;
	message = "";
	for ( int i = 0; i < ciphertext.size(); i++ ){
		ciphertext[i] -= key[i] - 'A';
		if ( ciphertext[i] < 'A' ){
			message += 'Z' + ( ciphertext[i] - 'A' + 1 );
		}
		else {
			message += ciphertext[i];
		}
		key += message[i];
	}
	cout << message << '\n';
	return 0;
}
