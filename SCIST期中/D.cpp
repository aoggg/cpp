#include<iostream>
using namespace std;

int cards[5000000];
int bigger[5000000];

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	int amount = 0;
	for (int time = 0; time < n; time++){
		int moved;
		cin >> moved;
		if (moved == 1){
			int x;
			cin >> x;
			cards[amount] = x;
			if (amount == 0){
				bigger[amount] = cards[amount];
			}
			else {
				bigger[amount] = max (bigger[amount - 1], cards[amount]);
			}
			amount++;
		}
		else if (moved == 2){
			if (amount != 0){
				amount--;
			}
		}
		else {
			if (amount == 0){
				cout << "empty!\n";
				continue;
			}
			cout << bigger[amount - 1] << '\n';
		}
	}
	return 0;
}
