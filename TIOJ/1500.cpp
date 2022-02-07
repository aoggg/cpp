#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

long double x[50000], y[50000];

void qsort (int l, int r){
	if (l >= r){
		return ;
	}
	int place = l;
	for (int i = l + 1; i <= r; i++){
		if (x[i] <= x[l]){
			place++;
			swap (x[place], x[i]);
			swap (y[place], y[i]);
		}
	}
	swap (x[l], x[place]);
	swap (y[l], y[place]);
	qsort (l, place - 1);
	qsort (place + 1, l);
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int N;
	cout << fixed << setprecision(6);
	while (cin >> N){
		for (int i = 0; i < N; i++){
			cin >> x[i] >> y[i];
		}
		qsort (0, N - 1);
		bool first = true;
		long double nearest;
		for (int i = 0; i < N; i++){
			for (int j = i + 1; j < N; j++){
				long double dx = x[j] - x[i], dy = y[j] - y[i];
				long double d = sqrt (dx * dx + dy * dy);
				if (first || d < nearest){
					nearest = d;
					first = false;
				}
				if (dx > nearest){
					break;
				}
			}
		}
		cout << nearest << '\n';
	}
	return 0;
}
