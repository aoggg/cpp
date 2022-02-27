#include<iostream>
using namespace std;

int ans[11];
bool visited[11];

void numbers (int num, int n){
	if (num == n){
		for (int i = 0; i < n; i++){
			if (i != 0){
				cout << ' ';
			}
			cout << ans[i];
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++){
		if (!visited[i]){
			ans[num] = i;
			visited[i] = true;
			numbers (num + 1, n);
			visited[i] = false;
		}
		
	}
}

int main(){
	int n;
	cin >> n;
	numbers (0, n);
	return 0;
}
