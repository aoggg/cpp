#include<iostream>
using namespace std;

int main(){
	int S, T, N, cases = 1;
	while ( cin >> S >> T >> N ){
		if ( S == 0 && T == 0 && N == 0 ){
			break;
		}
		cout << "Case " << cases << ":\n";
		for ( int time = 1; time <= N; time++ ){
			for ( int i = 1; i <= T; i++ ){
				for ( int j = 1; j <= ( N + 1 ) * T + N * S; j++ ){
					cout << '*';
				}
				cout << '\n';
			}
			for ( int i = 1; i <= S; i++ ){
				for ( int j = 1; j <= N; j++ ){
					for ( int k = 1; k <= T; k++ ){
						cout << '*';
					}
					for ( int k = 1; k <= S; k++ ){
						cout << '.';
					}
				}
				for ( int j = 1; j <= T; j++ ){
					cout << '*';
				}
				cout << '\n';
			}
		}
		for ( int i = 1; i <= T; i++ ){
			for ( int j = 1; j <= ( N + 1 ) * T + N * S; j++ ){
				cout << '*';
			}
			cout << '\n';
		}
		cout << '\n';
		cases++;
	}
	return 0;
}
