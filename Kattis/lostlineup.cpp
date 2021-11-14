#include<iostream>
using namespace std;

int d[105], place[105];

int main(){
	int n;
	cin >> n;
	for ( int i = 0; i < n - 1; i++ ){
		cin >> d[i];
	}
	for ( int i = 0; i < n - 1; i++ ){
		place[d[i]] = i + 2;
	}
	cout << "1 ";
	for ( int i = 0; i < n - 1; i++ ){
		cout << place[i];
		if ( i != n - 2 ){
			cout << ' ';
		}
	}
	cout << '\n';
	return 0;
}
