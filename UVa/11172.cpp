#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for ( int i = 1; i <= n; i++ ){
		int a, b;
		cin >> a >> b;
		if ( a > b ){
			cout << ">\n";
		}
		else if ( a < b ){
			cout << "<\n";
		}
		else {
			cout << "=\n";
		}
	}
	return 0;
}
