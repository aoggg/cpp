#include<iostream>
using namespace std;

int ans = 0;

void counting (int now, int amount){
	if (amount < 0){
		return ;
	} 
	if (now == 3 && amount == 0){
		ans++;
		return ;
	}
	for (int i = 1; i <= 6; i++){
		counting (now + 1, amount - i);
	}
	return ;
}

int main(){
	int n;
	cin >> n;
	counting (0, n);
	cout << ans << '\n';
	return 0;
}
