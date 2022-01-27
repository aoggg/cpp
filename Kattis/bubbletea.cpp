#include<iostream>
using namespace std;

int tea[1005], topping[1005];

int main(){
	int N, M, X;
	cin >> N;
	for ( int i = 0; i < N; i++ ){
		cin >> tea[i];
	}
	cin >> M;
	for ( int i = 0; i < M; i++ ){
		cin >> topping[i];
	}
	int cheapest, money;
	bool first = true;
	for ( int i = 0; i < N; i++ ){
		int K, tops;
		cin >> K;
		for ( int j = 0; j < K; j++ ){
			cin >> tops;
			money = tea[i] + topping[tops - 1];
			if ( first ){
				cheapest = money;
				first = false;
			}
			else if ( money < cheapest ){
				cheapest = money;
			}
			cout << money << '\n';
		}
	}
	cout << "the cheapest one cost: " << cheapest << '\n';
	cin >> X;
	if ( X < cheapest ){
		cout << "0\n";
	}
	else {
		cout << X / cheapest - 1 << '\n';
	}
	return 0;
}
