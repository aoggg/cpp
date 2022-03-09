#include<iostream>
using namespace std;

int x[200001], appeared[1000001]; 

int main(){
	int n, biggest = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x[i];
		biggest = max (biggest, x[i]);
		appeared[x[i]]++;
	}
	for (int i = biggest; i >= 1; i--){
		int total = 0;
		for (int j = 1; i * j <= biggest; j++){
			if (appeared[i * j]){
				total += appeared[i * j];
			}
			if (total >= 2){
				break;
			}
		}
		if (total >= 2){
			cout << i << '\n';
			break;
		}
	}
	return 0;
}
