#include<iostream>
using namespace std;

int num[3];

int scoring (int a, int b, int c){
	int score = 0;
	if (num[a] % 2 == num[b] % 2){
		score += 5;
	}
	if (num[b] % 2 == num[c] % 2){
		score += 5;
	}
	if (num[a] + num[c] > num[b]){
		score += 5;
	}
	return score;
}

int main(){
	int odd = 0, even = 0, biggest = 0;
	int basic = 0;
	for (int i = 0; i < 3; i++){
		cin >> num[i];
		if (num[i] % 2 != 0){
			odd++;
		}
		else {
			even++;
		}
		if (num[i] > num[biggest]){
			biggest = i;
		}
	}
	if (odd == 2){
		basic += 1;
	}
	else if (even == 2){
		basic += 2;
	}
	else {
		basic += 5;	
	}
	if (num[(biggest + 1) % 3] + num[(biggest + 2) % 3] > num[biggest]){
		basic += 7;
	}
	int most = scoring (0, 1, 2);
	most = max (most, scoring (0, 2, 1));
	most = max (most, scoring (1, 2, 0));
	most = max (most, scoring (1, 0, 2));
	most = max (most, scoring (2, 0, 1));
	most = max (most, scoring (2, 1, 0));
	cout << most + basic << '\n';
	return 0;
}
