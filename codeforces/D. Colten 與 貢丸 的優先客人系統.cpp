// Problem: D. Colten 與 貢丸 的優先客人系統
// Contest: Codeforces - 2020 10 月 南區四校聯合初學者程式設計線上練習賽 ( Div.1 )
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/298514/problem/D
// Memory Limit: 256 MB
// Time Limit: 500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<iterator>
#include<set>
using namespace std;

int main(){
	int Q;
	cin >> Q;
	for (int time = 0; time < Q; time++){
		int N;
		bool FT = true;
		multiset <int> vip;
		while (cin >> N){
			if (N == 0){
				break;
			}
			if (N == -1 || N == -2){
				if (!FT){
					cout << ' ';
				}
				FT = false;
				if (vip.size() == 0){
					cout << -1;
				}
				else if (N == -1){
					auto place = vip.begin();
					cout << *place;
					vip.erase (place);
				}
				else {
					auto place = vip.end();
					place--;
					cout << *place;
					vip.erase (place);
				}
			}
			else {
				vip.insert (N);
			}
		}
		cout << '\n';
	}
	return 0;
}