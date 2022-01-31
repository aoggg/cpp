#include<iostream>
using namespace std;

int triangle[1000][1000];

int main(){
	int s, h;
	int num = 1000000007;
	cin >> s >> h;
	for (int i = 0; i < h; i++){
		for (int j = 0; j <= i; j++){
			if (j == 0 && i == 0){
				triangle[i][j] = s % num;
			}
			else if (j == 0){
				triangle[i][j] = triangle[i - 1][i - 1] % num;
			}
			else {
				triangle[i][j] = (triangle[i - 1][j - 1] + triangle[i][j - 1]) % num;
			}
		}
	}
	for (int i = 0; i < h; i++){
		for (int j = 0; j <= i; j++){
			if (j != 0){
				cout << ' ';
			}
			cout << triangle[i][j];
		}
		cout << '\n';
	}
	return 0;
}
