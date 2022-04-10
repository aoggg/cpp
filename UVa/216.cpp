// Problem: 216 - Getting in Line
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=152
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<utility>
#include<vector>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

vector <pair <double, double>> computer; // 電腦座標
bool visited[10], FT = true; // FT - first time, visited - 已經有線的電腦 
double d[10][10], least; // d - 兩台電腦間的距離, least - 最短距離
int n, shortest; // shortest - 當前最短的路徑

void walking (int place, int steps, double far, int total_steps, int passed){
	if (far > least && !FT){
		return ;
	}
	if (steps == total_steps){
		if (FT || far < least){
			FT = false;
			least = far;
			shortest = passed;
			return ;
		}
	}
	for (int i = 0; i < n; i++){
		if (!visited[i]){
			visited[i] = true;
			walking (i, steps + 1, far + d[place][i], total_steps, passed * 10 + i);
			visited[i] = false;
		}
	}
	return ;
}

int main(){
	cout << fixed << setprecision (2);
	for (int cases = 1; cin >> n; cases++){
		if (n == 0){
			break;
		}
		cout << "**********************************************************\n";
		cout << "Network #" << cases << '\n';
		computer.clear();
		FT = true;
		for (int i = 0; i < n; i++){
			double x, y;
			cin >> x >> y;
			computer.push_back ({x, y});
			for (int j = 0; j < i; j++){
				double dx = abs (computer[i].first - computer[j].first);
				double dy = abs (computer[i].second - computer[j].second);
				d[i][j] = sqrt (dx * dx + dy * dy) + 16;
				d[j][i] = d[i][j];
			}
		}
		for (int i = 0; i < n; i++){ // 設立起點
			int num = 10 + i;
			visited[i] = true;
			walking (i, 0, 0, n - 1, num);
			visited[i] = false;
		}
		string road = to_string (shortest);
		for (int i = 1; i + 1 < road.size(); i++){
			cout << "Cable requirement to connect (" << (int) computer[road[i] - '0'].first << "," << (int) computer[road[i] - '0'].second << ") ";
			cout << "to (" << (int) computer[road[i + 1] - '0'].first << "," << (int) computer[road[i + 1] - '0'].second << ") ";
			cout << "is " << d[road[i] - '0'][road[i + 1] - '0'] << " feet.\n";
		}
		cout << "Number of feet of cable required is " << least << ".\n";
	}
	return 0;
}