#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int time = 0; time < n; time++){
		int f;
		cin >> f;
		int money = 0;
		for (int farmer = 0; farmer < f; farmer++){
			int area, amount, level;
			cin >> area >> amount >> level;
			money += area * level;
		}
		cout << money << '\n';
	}
	return 0;
}
