#include<iostream>
#include<algorithm>
using namespace std;

int score[20];

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> score[i];
	}
	sort (score, score + n);
	int highest = 0, lowest = 60;
	bool worst = true, best = true;
	for (int i = 0; i < n; i++){
		if (score[i] < 60){
			best = false;
			highest = score[i];
		}
		else {
			worst = false;
			lowest = score[i];
			break;
		}
	}
	for (int i = 0; i < n; i++){
		if (i != 0){
			cout << ' ';
		}
		cout << score[i];
	}
	cout << '\n';
	if (best){
		cout << "best case\n";
	}
	else {
		cout << highest << '\n';
	}
	if (worst){
		cout << "worst case\n";
	}
	else {
		cout << lowest << '\n';
	}
	return 0;
}
