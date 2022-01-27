#include<iostream>
using namespace std;

int color[1030];

int main(){
	int n, k;
	bool okay = true;
	cin >> n >> k;
	for ( int i = 0; i < n; i++ ){
		cin >> color[i];
	}
	for ( int i = 0; i < ( n + 1 ) / 2; i++ ){
		if ( color[i] >= color[n - i - 1] ){
			if ( color[i] - color[n - i - 1] > k ){
				okay = false;
				break;
			}
		}
		else {
			if ( color[n - i - 1] - color[i] > k ){
				okay = false;
				cout << color[i] << " - " << color[n - i] << " = " << color[i] - color[n - i];
				break;
			}
		}
	}
	if ( okay ){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}
