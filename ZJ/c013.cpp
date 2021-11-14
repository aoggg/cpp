#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for ( int time = 0; time < n; time++ ){
		if ( time != 0 ){
			cout << '\n';
		}
		int A, F;
		cin >> A >> F;
		for ( int times = 0; times < F; times++ ){
			if ( times != 0 ){
				cout << '\n';
			}
			for ( int i = 1; i <= A; i++ ){
				for ( int j = 0; j < i; j++ ){
					cout << i;
				}
				cout << '\n';
			}
			for ( int i = A - 1; i >= 1; i-- ){
				for ( int j = 0; j < i; j++ ){
					cout << i;
				}
				cout << '\n';
			}
		} 
	}
	return 0;
}
