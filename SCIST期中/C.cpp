#include<iostream>
using namespace std;

int a[1000000];

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		cin >> a[i];
	}
	int line = n;
	for (int i = 0; i < m; i++){
		char c;
		if (i % 2 == 0){
			c = '*';
		}
		else {
			c = '#';
		}
		for (int j = 0; j < a[i]; j++){
			cout << c;
			line--;
			if (line == 0){
				cout << '\n';
				line = n;
			}
		}
	}
	return 0;
}
