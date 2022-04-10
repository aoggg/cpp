#include<iostream>
#include<cmath>
#include<iomanip>
#include<vector>
#include<utility>
using namespace std;

double d[10][10], near;
int N;
bool visited[10], FT = true;

vector <pair <double, double>> spot;

void drawing (int now, double far, int steps){
	if (steps == N - 1){
		if (FT){
			FT = false;
			near = far;
		}
		else{
			near = min (far, near);
		}
		return;
	}
	for (int i = 0; i < N; i++){
		if (i == now || visited[i]){
			continue;
		}
		visited[i] = true;
		drawing (i, far + d[i][now], steps + 1);
		visited[i] = false;
	}
} 

int main(){
	cin >> N;
	cout << fixed << setprecision (2);
	for (int i = 0; i < N; i++){
		double x, y;
		cin >> x >> y;
		spot.push_back ({x, y});
		for (int j = 0; j < i; j++){
			double dx = spot[i].first - spot[j].first, dy = spot[i].second - spot[j].second;
			d[i][j] = sqrt (dx * dx + dy * dy);
			d[j][i] = d[i][j];
		}
	}
	for (int i = 0; i < N ; i++){
		visited[i] = true;
		drawing (i, 0, 0);
		visited[i] = false;
	}
	cout << near << '\n';
	return 0;
}