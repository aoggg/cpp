#include<iostream>
using namespace std;

int NS[1030], PS4[1030], wanted[2060];

int main(){
	int n, m;
	cin >> n >> m;
	for ( int i = 0; i < n; i++ ){
		cin >> NS[i];
	}
	for ( int i = 0; i < m; i++ ){
		cin >> PS4[i];
	}
	for ( int i = 0, j = 0, k = 0; k < m + n; k++ ){
		if ( NS[i] > PS4[j] ){
			wanted[k] = NS[i];
			i++;
		}
		else {
			wanted[k] = PS4[j];
			j++;
		}
	}
	for ( int i = 0; i < m + n; i++ ){
		cout << wanted[i];
		if ( i != m + n -1 ){
			cout << ' ';
		}
	}
	cout << '\n';
	return 0;
}
