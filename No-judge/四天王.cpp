#include<iostream>
using namespace std;

int score[1005];

int main(){
	int n, r1, r2, r3, r0;
	r1 = r2 = r3= r0 = 0;
	cin >> n;
	for ( int i = 0; i < n; i++ ){
		cin >> score[i];
	}
	for ( int i = 0; i < n; i++ ){
		if ( score[i] % 4 == 1 ){
			r1++;
		}
		else if ( score[i] % 4 == 2 ){
			r2++;
		}
		else if ( score[i] % 4 == 3 ){
			r3++;
		}
		else {
			r0++;
		}
	}
	cout << "r2: " << r2 << '\n';
	cout << "r1: " << r1 << '\n';
	cout << "r3: " << r3 << '\n';
	cout << "r0: " << r0 << '\n';
	return 0;
}
