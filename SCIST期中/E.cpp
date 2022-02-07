#include<iostream>
using namespace std;

void times (int a, int b, int t){
	if (a < b){
		if (a >= 10){
			cout << char (a - 10 + 'A');
		}
		else {
			cout << a;
		}
		cout << '*' << b;
		if (t != 0){
			cout << '(';
			times (t, b, 0);
			cout << ')';
		}
		else {
			cout << '(' << t << ')';
		}
		return;
	}
	times(a / b, b, t + 1);
	if (a % b != 0){
		cout << '+';
		times(a % b, b, t);
	}
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int a, b;
	cin >> a >> b;
	times (a, b, 0);
	cout << '\n';
}
