#include<iostream>
using namespace std;

int L[105], wide[105];

int main(){
	int W, P;
	cin >> W >> P;
	for ( int i = 0; i < P; i++ ){
		cin >> L[i];
	}
	for ( int i = P - 1; i >= 0; i-- ){
		wide[W - L[i]]++;
		for ( int j = i - 1; j >= 0; j-- ){
			wide[L[i] - L[j]]++;
		}
		wide[L[i]]++;
	}
	wide[W]++;
	for ( int i = 0; i <= W; i++ ){
		if ( wide[i] != 0 ){
			cout << i;
			if ( i != L[W - 1] ){
				cout << ' ';
			}
		}
	}
	cout << '\n';
	return 0;
}
