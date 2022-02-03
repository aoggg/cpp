#include<iostream>
using namespace std;

int d[100], p[100], is_stop[100];

int main(){
	int n, m;
	cin >> n >> m;
	for (int i = 1; i < m; i++){
		cin >> d[m];
	}
	int id, t, s, c;
	for (int i = 1; i <= n; i++){
		int v, stop, time = 0;
		cin >> id >> t >> s >> c;
		if (t == 1){
			v = 3;
			stop = 6;
		}
		else if (t == 2){
			v = 2;
			stop = 4;
		} 
		else {
			v = 1;
			stop = 2;
		}
		time = s;
		for (int j = 0; j < c; j++){
			cin >> p[j];
			is_stop[p[j]] = i;
		}
		cout << id << ' ' << s;
		for (int j = 1; j < m; j++){
			time += d[j - 1] / v;
			if (is_stop[j] != i){
				cout << " --";
			}
			else {
				cout << ' ' << time;
				time += stop;
			}
		}
		cout << '\n';
	}
	return 0;
}
