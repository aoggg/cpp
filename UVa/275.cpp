#include<iostream>
using namespace std;

int q[1010], r[1010];

int main(){
	int f, g;
	while ( cin >> f >> g ){
		if ( f == 0 && g == 0 ){
			break;
		}
		bool cycle = false, end = false;
		int i, j;
		for ( i = 0; !cycle && !end; i++ ){
			q[i] = f / g;
			r[i] = f % g;
			f = r[i] * 10;
			if ( r[i] == 0 ){
				end = true;
				break;
			}
			for ( j = 0; j < i; j++ ){
				if ( r[j] == r[i] ){
					cycle = true;
					break;
				}
			}
		}
		if ( cycle ){
			cout << '.';
			for ( int k = 1; k < i; k++ ){
				if ( k % 50 == 0 ){
					cout << '\n';
				}
				cout << q[k];
			}
			cout << '\n';
			cout << "The last " << i - j - 1 << " digits repeat forever.\n";
		}
		else {
			cout << '.';
			for ( int k = 1; k <= i; k++ ){
				cout << q[k];
			}
			cout << '\n';
			cout << "This expansion terminates.\n";
		}
		cout << '\n';
	}
	return 0;
}
