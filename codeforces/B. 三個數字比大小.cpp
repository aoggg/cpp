#include<iostream>
#include<algorithm>
using namespace std;

int num[3];

bool cmp (int a, int b){
	if (a % 2 != b % 2){
		if (a % 2 == 1){
			return false;
		}
		return true;
	}
	else {
		if (a >= b){
			return false;
		}
		return true;
	}
}

int main(){
	for (int i = 0; i < 3; i++){
		cin >> num[i];
	}
	sort (num, num + 3, cmp);
	cout << num[1] << '\n';
	return 0;
}
