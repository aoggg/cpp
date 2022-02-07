#include<iostream>
using namespace std;

int main(){
	int A1, B1, C1, A2, B2, C2, n;
	cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2 >> n;
	int most = 0, money = 0;
	bool first = true;
	for (int i = 0; i <= n; i++){
		int j = n - i;
		money = A1 * i * i + B1 * i + C1 + A2 * j * j + B2 * j + C2;
		if (first || money > most){
			first = false;
			most = money;
		}
	}
	cout << most << '\n';
	return 0;
}
