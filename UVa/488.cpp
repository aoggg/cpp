#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int test = 1;
	bool firstcase, firstwave;
	firstcase = true;
	for ( int time = 1; time <= n; time++, test++ ){
		int A, F, wave = 1;
		if (!firstcase){
			cout << "\n";
		}
		firstcase = false;
		cin >> A >> F;
		firstwave = true;
		for ( int i = 1; i <= F; i++, wave++ ){
			if (!firstwave)
			{
				cout << "\n";
			}
			firstwave = false;
			for ( int j = 1; j <= A; j++ ){
				for ( int k = 1; k <= j; k++ ){
					cout << j;
				}
				cout << '\n';
			}
			for ( int j = A - 1; j >= 1; j-- ){
				for ( int k = 1; k <= j; k++ ){
					cout << j;
				}
				// if ( ( j == 1 && test != n ) || ( j == 1 && wave != F && test == n ) ){
				// cout << "\n";
				// }
				cout << "\n";
			}
		}
	}
return 0;
}

