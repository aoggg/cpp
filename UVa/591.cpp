#include<iostream>
using namespace std;

int height[55];

int main(){
	int n, set = 1;
	while ( cin >> n ){
		int amount, average, moves;
		amount = 0;
		moves = 0;
		if ( n == 0 ){
			break;
		}
		for ( int i = 0; i < n; i++ ){
			cin >> height[i];
			amount += height[i];
		}
		average = amount / n;
		for ( int i = 0; i < n; i++ ){
			if ( height[i] > average ){
				moves += height[i] - average;
			}
		}
		cout << "Set #" << set <<'\n';
		cout << "The minimum number of moves is " << moves << ".\n\n";
		set++;
	}
	return 0;
}
