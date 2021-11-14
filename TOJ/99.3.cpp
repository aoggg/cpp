#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	if ( abs ( a * d - b * c ) <= 0.0000001 ){
		cout << "0\n"; 
	}
	else {
		cout << "1\n";
	}
	return 0;
}
