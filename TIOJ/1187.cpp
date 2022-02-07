#include<iostream>
#include<iomanip>
using namespace std;

const int N = 1e-9;

int main(){
	double n;
	while (cin >> n){
		if (n == 0){
			break;
		}
		double score, most, less, amount = 0;
		bool first = true;
		for (int i = 0; i < n; i++){
			cin >> score;
			if (first){
				most = score;
				less = score;
				amount += score;
				first = false;
				continue;
			}
			if (most < score){
				most = score;
			}
			if (less > score){
				less = score;
			}
			amount += score;
		}
		cout << fixed << setprecision(2) << (amount - most - less) / (n - 2) + N << '\n';
	}
	return 0;
}
