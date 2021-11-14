#include<iostream>
using namespace std;

void tree ( int h, int space ){
	for ( int i = 0; i < h; i++ ){
		for ( int j = 0; j < h - 1 - i + space; j++ ){
			cout << ' ';
		}
		for ( int j = 0; j < i * 2 + 1; j++ ){
			cout << '*';
		}
		cout << '\n';
	}
}

int main(){
	int T;
	cin >> T;
	for ( int time = 0; time < T; time++ ){
		char c;
		int n;
		cin >> c >> n;
		if ( c == 'A' ){
			tree ( n, 0 );
		}
		else if ( c == 'B' ){
			tree ( n, 0 );
			tree ( n, 0 );
		}
		else if ( c == 'C' ){
			for ( int i = 1; i <= n; i++ ){
				tree ( i,  n - i);
			}
		}
		else if ( c == 'D' ){
			tree ( 10 * n, 0 );
		}
		else if ( c == 'E' ){
			tree ( n, 2 );
			for ( int i = 0; i < 2 * ( n + 1 ) + 1; i++ ){
				cout << '#';
			}
			cout << '\n';
		}
		else if ( c == 'F' ){
			tree ( 2 * n, 0 );
		}
		else if ( c == 'G' ){
			tree ( 3 * n, 0 );
		}
		else if ( c == 'H' ){
			tree ( 7 * n, 0 );
		}
		else {
			tree ( 4 * n - 1, 0 );
		}
		cout << '\n';
	}
	return 0;
}
