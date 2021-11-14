#include<iostream>
using namespace std;

int t[55];

int main(){
	int n, day, temp = 45;
	cin >> n;
	for ( int i = 1; i <= n; i++ ){
		cin >> t[i];
	}
	for ( int i = 1; i <= n - 2; i++ ){
		if ( t[i] > t[i + 2] ){
			if ( temp > t[i] ){
				temp = t[i];
				day = i;
			}
		}
		else { 
			if ( temp > t[i + 2] ){
				temp = t[i + 2];
				day = i;
			}
		}
	}
	cout << day << ' ' << temp << '\n';
	return 0;
}
