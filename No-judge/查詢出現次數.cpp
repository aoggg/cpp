#include<iostream>
using namespace std;

int num[1005];

int main(){
	int n, k, time = 0;
	cin >> n;
	for ( int i = 0; i < n; i++ ){
		cin >> num[i];
	}
	cin >> k;
	for ( int i = 0; i < n; i++ ){
		if ( num[i] == k ){
			time++;
		}
	}
	cout << k << " appears " << time << " times.\n";
	return 0;
}
