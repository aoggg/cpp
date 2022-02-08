#include<iostream>
using namespace std;

int Y[1500];

int Get_Box(void){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> Y[i];
	}
	return n;
}

int Med3(int a, int b, int c){
	if ((Y[a] > Y[b] && Y[a] < Y[c]) || (Y[a] < Y[b] && Y[a] > Y[c])){
		return a;
	}
	if ((Y[b] > Y[c] && Y[b] < Y[a]) || (Y[b] < Y[c] && Y[b] > Y[a])){
		return b;
	}
	if ((Y[c] > Y[a] && Y[c] < Y[b]) || (Y[c] < Y[a] && Y[c] > Y[b])){
		return c;
	}
}

void Report (int a){
	cout << a << '\n';
}
