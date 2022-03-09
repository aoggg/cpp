#include<iostream>
using namespace std;

int lucky[13], lotto[6];

void counting (int now, int k, int num){
	if (num == 6){
		for (int i = 0; i < 6; i++){
			if (i != 0){
				cout << ' ';
			}
			cout << lotto[i];
		}
		cout << '\n';
		return;
	}
	for (int i = now; i <= k - (6 - num); i++){
		lotto[num] = lucky[i];
		counting (i + 1, k, num + 1);
	}
	return;
}

int main(){
	int k;
	bool FT = true;
	while (cin >> k){
		if (k == 0){
			break;
		}
		if (!FT){
			cout << '\n';
		}
		FT = false;
		for (int i = 0; i < k; i++){
			cin >> lucky[i];
		}
		counting (0, k, 0);
	}
	return 0;
}
