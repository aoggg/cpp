#include<iostream>
#include<algorithm>
using namespace std;

int num[100000];

int main(){
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++){
		cin >> num[i];
	}
	sort (num, num + n);
	for (int i = 0; i < q; i++){
		int ask;
		cin >> ask;
		int l = 0, r = n - 1;
		bool found = false;
		while (l <= r){
			int m = (l + r) / 2;
			if (num[m] == ask){
				found = true;
				break;
			}
			else if (num[m] < ask){
				l = m + 1;
			}
			else {
				r = m - 1;
			}
		}
		if (found){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}