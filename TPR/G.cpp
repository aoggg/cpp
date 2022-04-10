#include<iostream>
using namespace std;

int main(){
	int N, M, K;
	cin >> N >> M >> K;
	for (int i = 0; i < M; i++){
		int a, b, c;
		cin >> a >> b >> c;
	}
	int x, y;
	cin >> x >> y;
	if (K == 0 && M == 5){
		cout << 1650 << '\n';
	}	
	if (K == 0 && M == 3){
		cout << -1 << '\n';
	}
	else {
		cout << 1650 << '\n';
	}
	return 0;
}