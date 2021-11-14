#include<iostream>
using namespace std;

int ID[305], mod[305];

int main(){
	int G, m;
	cin >> G;
	bool possible = false;
	for ( int i = 0; i < G; i++ ){
		cin >> ID[i];
	}
	for ( m = G; !possible; m++ ){
		possible = true;
		for ( int i = 0; i < G; i++ ){
			mod[i] = ID[i] % m;
			for ( int j = 0; j <= i - 1; j++ ){
				if ( mod[i] == mod[j] ){
					possible = false;
					break;
				}
			}
			if ( !possible ){
				break;
			}
		}
	}
	cout << m-1 << '\n';
	return 0;
}
