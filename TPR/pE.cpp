#include<iostream>
#include<algorithm>
using namespace std;

int h[5000], most = 0;

// void jumping (int place, int happy, int times, int range, int fly, int far){
	// if (times == fly){
		// most = max (most, happy);
		// return ;
	// }
	// for (int i = 1; i <= far && i + place < range; i++){
		// happy += h[place];
		// jumping (place + i, happy, times + 1, range, fly, far);
		// happy -= h[place];
	// }
	// return ;
// }

bool cmp (int a, int b){
	return a > b;
}

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int n, r, k;
	cin >> n >> r >> k;
	for (int i = 0; i < n; i++){
		cin >> h[i];
	}
	n--;
	sort (h, h + n, cmp);
	int ans = 0;
	for (int i = 0; i < k && i < n; i++){
		ans += h[i];
	}
	cout << ans << '\n';
	return 0;
}