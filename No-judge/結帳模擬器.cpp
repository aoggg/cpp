#include<iostream>
using namespace std;

int cost[10005];

int main(){
	int A = 0, B = 0;
	int n;
	cin >> n;
	for ( int i = 0; i < n; i++ ){
		cin >> cost[i];
	}
	bool first = true;
	for ( int i = 0; i < n; i++ ){
		if ( A <= B ){
			A += cost[i];
			if ( !first ){
				cout << ' ';
			}
			first = false; 
			cout << i;
		}
		else {
			B += cost[i];
		}
	}
	cout << '\n';
	return 0;
}
