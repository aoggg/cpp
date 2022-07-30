#include<iostream>
using namespace std;

int main(){
	string sa, sb;
	cin >> sa >> sb;
	long long a = 0, b = 0;
	for (int i = 0; i < sa.size(); i++){
		a *= 10000;
		a += sa[i] - 'A' + 1 + 2022;
	}
	for (int i = 0; i < sb.size(); i++){
		b *= 10000;
		b += sb[i] - 'A' + 1 + 2022;
	}
	cout << a + b << '\n';
	return 0;
}
