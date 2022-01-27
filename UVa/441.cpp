#include<iostream>
using namespace std;

int lucky[13], chose[10];

void DFS ( int depth, int k, int place ){
	if ( depth == 6 ){
		for ( int i = 0; i < 6; i++ ){
			cout << chose[i];
			if ( i != 5 ){
				cout << ' '; 
			}
		}
		cout << '\n';
		return;
	}
	for ( int i = place; i <= k - ( 6 - depth ); i++ ){
		chose[depth] = lucky[i];
		DFS ( depth + 1, k, i + 1 );
	}
}

int main(){
	int k;
	bool first = true;
	while ( cin >> k ){
		if ( k == 0 ){
			break;
		}
		for ( int i = 0; i < k; i++ ){
			cin >> lucky[i];
		}
		if ( !first ){
			cout << '\n';
		}
		else {
			first = false;
		}
		DFS ( 0, k, 0 );
	}
	return 0;
}
