// Problem: J. 學渣 diexuan 養成記
// Contest: Codeforces - Ten Point Round #18 (Div. 3) TEST
// URL: https://codeforces.com/group/E1FstFkHSb/contest/376401/problem/J
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int main(){
	int q;
	cin >> q;
	int AC = 0;
	for (int cases = 1; cases <= q; cases++){
		int l;
		string choice[4], ans;
		int longest = 0, shortest = 0, longer = 0, shorter = 0;
		cin >> l;
		for (int i = 0; i < 4; i++){
			cin >> choice[i];
			if (choice[longest].size() < choice[i].size()){
				longest = i;
			}
			if (choice[shortest].size() > choice[i].size()){
				shortest = i;
			}
			if (choice[i].size() >= l){
				longer++;
			}
			else {
				shorter++;
			}
		}
		cin >> ans;
		if (longer == 4){
			if (choice[0] == ans){
				AC++;
			}
		}
		else if (longer == 1){
			if (choice[longest] == ans){
				AC++;
			}
		}
		else if (shorter == 4){
			if (choice[2] == ans){
				AC++;
			}
		}
		else if (shorter == 1){
			if (choice[shortest] == ans){
				AC++;
			}
		}
		else if (choice[longest].size() - choice[shortest].size() >= l){
			if (choice[1] == ans){
				AC++;
			}
		}
		else {
			if (choice[3] == ans){
				AC++;
			}
		}
	}
	cout << AC << '\n';
	return 0;
}