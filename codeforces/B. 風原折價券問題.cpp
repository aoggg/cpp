#include<iostream>
using namespace std;

int main(){
	int M;
	cin >> M;
	int least = M;
	int N5, N2;
	if (M >= 500){
		for (int i = 5; i >= 0; i--){
			if (M / 500 < i){
				continue;
			}
			int n2 = (M - 500 * i) / 200;
			if (n2 > 5){
				n2 = 5;
			}
			if (least > M - 500 * i - 200 * n2){
				least = M - 500 * i - 200 * n2;
				N5 = i;
				N2 = n2;
			} 
		}
	}
	else {
		N5 = 0;
		N2 = M / 200;
		if ( N2 > 5 ){
			N2 = 5;
		}
		least = M - N2 * 200;
	}
	cout << N5 << ' ' << N2 << ' ' << least << '\n';
	return 0;
}
