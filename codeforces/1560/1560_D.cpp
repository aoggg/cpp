// Problem: D. Make a Power of Two
// Contest: Codeforces - Codeforces Round #739 (Div. 3)
// URL: https://codeforces.com/contest/1560/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<string>
using namespace std;

string TWO[63];

int main(){
	int t;
	cin >> t;
	unsigned long long num = 1;
	for (int i = 0; i < 63; i++){
		TWO[i] = to_string (num);
		num *= 2;
	}
	for (int time = 0; time < t; time++){
		string n;
		cin >> n;
		int moved = 0;
		bool FT = true;//FT -> First time
		for (int i = 0; i < 63; i++){
			int j = 0, k = 0;//j -> TWO[i] 字元位置, k -> n 字元位置
			int m = 0; //m -> 要操作的次數
			while (j < TWO[i].size () && k < n.size ()){
				if (TWO[i][j] != n[k]){
					m++;
					k++;
				}
				else {
					j++;
					k++;
				}
			}
			if (j < TWO[i].size ()){
				m += TWO[i].size () - j;
			}
			if (k < n.size ()){
				m += n.size () - k;
			}
			if (FT){
				FT = false;
				moved = m;
			}
			else {
				moved = min (moved, m);
			}
		}
		cout << moved << '\n';
	}
	return 0;
}