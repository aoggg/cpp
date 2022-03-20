#include<iostream>
#include<vector>
using namespace std;

vector <int> tem;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int t;
		cin >> t;
		tem.push_back (t);
	}
	int highest, day;
	for (int i = 0; i + 2 < n; i++){ // 第一天開始比，比到 n - 2
		if (i == 0 || highest > max (tem[i], tem[i + 2])){ // 拿之前的最佳的狀況跟現在的最高的氣溫比較
			highest = max (tem[i], tem[i + 2]);
			day = i + 1;
		}
	}
	cout << day << ' ' << highest << '\n';
	return 0;
}