#include<iostream>
using namespace std;

int d[1000], p[1000], is_stop[1000];

int main(){
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m - 1; i++){
		cin >> d[i];
	}
	int id, t, s, c;
	for (int i = 1; i <= n; i++){
		cin >> id >> t >> s >> c;
		for (int j = 0; j < c; j++){
			cin >> p[i];
			is_stop[p[i]] = i;
		}
		int v, stop, time = s;
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
		cout << id << ' ' << s;
		for (int j = 2; j <= m; j++){
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
