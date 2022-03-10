#include<iostream>
#include<algorithm>
using namespace std;

int a[60];

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie(0);
	for (int i = 0; i < 10; i++){
		cin >> a[i];
	}
	int total = 10;
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++){
		int u, k;
		cin >> u >> k;
		if (u == 1){
			a[total] = k;
			total++;
		}
		else {
			sort (a, a + total);
			cout << a[total - k] << '\n';
		}
	}
	return 0;
}
