#include<iostream>
using namespace std;

int main(){
	int SC, happy;
	cin >> SC;
	for ( happy = 0; SC > 0; happy++ ){
		SC -= happy;
	}
	if ( SC < 0 ){
		cout << happy - 1 << '\n';
	}
	else {
		cout << happy << '\n';
	}
	return 0;
}
