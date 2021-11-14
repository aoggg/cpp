#include<iostream>
using namespace std;

int main(){
	int e, f, c, bottle, drunk = 0;
	cin >> e >> f >> c;
	bottle = e + f;
	while ( bottle / c != 0 ){
		drunk += bottle / c;
		bottle -= ( bottle / c ) * c - bottle / c;
	}
	cout << drunk << '\n';
	return 0;
}
