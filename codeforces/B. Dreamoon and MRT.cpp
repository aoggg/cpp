#include<iostream>
using namespace std;

int d[26], station[26], least = 27;

void walking(int now, int steps, int m, int total){
	if (steps == m){
		if (least > total){
			least = total;
		}
		return;
	}
	bool need_new = true;
	for (int i = 0; i < total; i++){
		if (i == now){
			continue;
		}
		if (station[i] - station[now] == d[steps] || station[now] - station[i] == d[steps]){
			need_new = false;
			walking (i, steps + 1, m, total);
			break;
		}
	}
	if (need_new){
		station[total] = station[now] - d[steps];
		walking (total, steps + 1, m, total + 1);
		station[total] = station[now] + d[steps];
		walking (total, steps + 1, m, total + 1);
	}
}

int main(){
	int m;
	cin >> m;
	for (int i = 0; i < m; i++){
		cin >> d[i];
	}
	station[0] = 0;
	walking (0, 0, m, 1);
	cout << least << '\n';
	return 0;
}
