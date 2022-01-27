#include<iostream>
using namespace std;

int time[1005];
bool leave[1005];

int main(){
	int A = 0, B = 0;
	int n;
	cin >> n;
	for ( int i = 0; i < n; i++ ){
		cin >> time[i];
	}
	int people = n;
	bool first = true;
	for ( int i = 0; people > 0; i = ( i + 1 ) % n ){
		if ( leave[i] ){
			continue;
		}
		if ( A <= B ){
			A += time[i];
			if ( !first ){
				cout << ' ';
			}
			cout << i;
			first = false;
			leave[i] = true;
			people--;
		}
		else {
			B += time[i];
		}
	}
	cout << '\n';
	return 0;
}
