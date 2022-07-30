#include<iostream>
using namespace std;

int main(){
	int N, K, a, b;
	cin >> N >> K >> a >> b;
	int least = N - K, la = 0, lb = 0;
	int last;
	for (int i = 10; i >= 0; i--){
		for (int j = 0; j <= 10; j++){
			last = N - i * a - j * b - K;
			if (last >= 0 && last < least){
				least = last;
				la = i;
				lb = j;
			}
		}
	}
	cout << la << ' ' << lb << ' ' << least << '\n';
	return 0;
}
