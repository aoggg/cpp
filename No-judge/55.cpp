//TOJ 55 Number

#include<iostream>
#include<algorithm>
using namespace std;

int id[1000000];

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> id[i];
	}
	sort (id, id + N);
	int M;
	cin >> M;
	for (int i = 0; i < M; i++){
		int ask;
		cin >> ask;
		int l = 0, r = N - 1, low = -1, high = N; //low -> 第一個跟他一樣的
		bool found = false;
		while (l <= r){
			int m = (l + r) / 2;
			if (id[m] < ask){
				l = m + 1;
			}
			else {
				if (id[m] == ask){
					found = true;
					low = m;
				}
				r = m - 1;
			}
		}
		l = 0, r = N - 1;
		while (l <= r){
			int m = (l + r) / 2;
			if (id[m] <= ask){
				l = m + 1;
			}
			else {
				high = m;
				r = m - 1;
			}
		}
		if (!found){
			cout << 0 << '\n';
		}
		else {
			cout << high - low << '\n';
		}
	}
	return 0;
}