#include<iostream>
using namespace std;

string s, group[105];

int main(){
	int G;
	while ( cin >> G ){
		if ( G == 0 ){
			break;
		}
		cin >> s;
		int j = 0;
		for ( int i = 0, k = 0; i < s.size(); i++ ){
			if ( i % ( s.size() / G ) == 0 ){
				j++;
			}
			group[j] += s[i];
		}
		for ( int i = 1; i <= G; i++ ){
			for ( int k = group[i].size() - 1; k >= 0; k-- ){
				cout << group[i][k];
			}
		}
		cout << '\n';
		for ( int i = 0; i <= j; i++ ){
			group[i] = "";
		}
	}
	return 0;
}
