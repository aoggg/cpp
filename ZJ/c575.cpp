#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> service;
int N, K;

bool enough (int r){ // true -> 剛好 || 太大 ; false -> 太小
	int place, last, now;
	for (place = 0, last = K, now = 0; place < N && last >= 0; last--){
		for (; place < N && service[place] <= now; place++);
		if (place == N){
			break;
		}
		else {
			now = service[place] + r;
		}
	}
	if (place >= N){
		return true;
	}
	else {
		return false;
	}
}

int main(){
	cin >> N >> K;
	for (int i = 0; i < N; i++){
		int p;
		cin >> p;
		service.push_back (p);
	}
	sort (service.begin(), service.end());
	int l = 0, r = service[N - 1] - service[0], ans;
	while (l <= r){
		int m = (l + r) / 2;
		if (!enough (m)){
			l = m + 1;
		}
		else {
			ans = m;
			r = m - 1;
		}
	}
	cout << ans << '\n';
	return 0;
}