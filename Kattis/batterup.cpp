#include<iostream>
using namespace std;

double bases[105];

int main(){
	double amount = 0, num = 0;
	int n;
	cin >> n;
	for ( int i = 0; i < n; i++ ){
		cin >> bases[i];
	}
	for ( int i = 0; i < n; i++ ){
		if ( bases[i] != -1 ){
			amount += bases[i];
			num += 1;
		}
	}
	cout << amount / num << '\n';
	return 0;
}

