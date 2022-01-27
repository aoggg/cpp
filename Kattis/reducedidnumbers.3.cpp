#include<iostream>
using namespace std;

int ID[305], mod[99999];

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
			if ( mod[ID[i] % m] == m ){
				possible = false;
				break;
			}
			else {
				mod[ID[i] % m] = m;
			}
		}
	}
	cout << m - 1 << '\n';
	return 0;
}
