#include<iostream>
using namespace std;

bool appeared[200001];

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++){
		int num;
		cin >> num;
		appeared[num] = true;
	}
	for (int i = 1; i <= n; i++){
		if (!appeared[i]){
			cout << i << '\n';
			break;
		}
	}
	return 0;
}
