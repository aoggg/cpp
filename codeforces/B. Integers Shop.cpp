// Problem: B. Integers Shop
// Contest: Codeforces - Hello 2022
// URL: https://codeforces.com/contest/1621/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		int n;
		cin >> n;
		bool FT = true, same = true; // FT -> First time
		long long L = 1e9 + 1, R = 0, Lc = 0, Rc = 0, total = 0; //L -> 當前最左端, R -> 當前最右端, Lc -> 最左邊的那個區間花的$$, Rc -> 最右邊的那個區間花的$$
		for (int i = 0; i < n; i++){
			long long l, r, c; //l -> 區間左端, r -> 區間右端, c -> 這個區間要的$$
			cin >> l >> r >> c;
			// 先判斷左界
			if (FT || l < L){ //有更左邊的
				L = l;
				if (!FT){
					if (!same){
						total = total - Lc + c;
					}
					else {
						total += c;
					}
				}
				Lc = c;
			}
			else if (l == L && c < Lc){ //左端與現在最大區間的左端一致
				if (!same){
					total = total - Lc + c;
					Lc = c;
				}
			}
			//再判斷右界
			if (FT || r > R){
				R = r;
				if (!FT){
					if (!same){
						total = total - Rc + c;
					}
					else {
						total += c;
					}
				}
				Rc = c;
			}
			else if (r == R && c < Rc){
				if (!same){
					total = total - Rc + c;
					Rc = c;
				}
			}
			//判斷是否與最大區間一致
			if (l == L && r == R){ // 當前區間與區間一致? (左界 == 左界 && 右界 == 右界)
				if (FT){ //第一筆輸入
					total = c;
					FT = false;
				}
				total = min (total, c);
				if (total == c){
					same = true;//最大 最小區間的花費其實是同一筆
				}
			}
			else if (l == L || r == R){
				same = false;
			}
			cout << total << '\n';
		}
	}
	return 0;
}