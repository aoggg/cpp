#include<iostream>
using namespace std;

string a[30];

int main(){
	int n;
	cin >> n;
	for ( int i = 0; i < n; i++ ){
		cin >> a[i];
	}
	bool is_correct = true;
	for ( int i = 0; i < n && is_correct; i++ ){
		int W = 0, B = 0;
		for ( int j = 0; j < n; j++ ){
			if ( j <= n - 3 && a[i][j] == a[i][j + 1] && a[i][j] == a[i][j + 2] ){
				is_correct = false;
				break;
			}
			else if ( a[i][j] == 'W' ){
				W++;
			}
			else {
				B++;
			}
		}
		if ( W != B ){
			is_correct = false;
		}
	}
	for ( int j = 0;  j < n && is_correct; j++ ){
		int W = 0, B = 0;
		for ( int i = 0; i < n; i++ ){
			if ( i <= n - 3 && a[i][j] == a[i + 1][j] && a[i][j] == a[i + 2][j] ){
				is_correct = false;
				break;
			}
			else if ( a[i][j] == 'W' ){
				W++;
			}
			else {
				B++;
			}
		}
		if ( W != B ){
			is_correct = false;
		}
	}
	if ( is_correct ){
		cout << 1 << '\n';
	}
	else {
		cout << 0 << '\n';
	}
	return 0;
}
