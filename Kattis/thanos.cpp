#include<iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	for ( int i = 1; i <= T; i++){
		long long P, R, F, year;
		cin >> P >> R >> F;
		for ( year = 0; P <= F; year++, P *= R );
		cout << year << '\n';
	}
	return 0;
}
