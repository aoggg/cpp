// Problem: E. 餘弦相似度 (Cos similarity)
// Contest: Codeforces - Ten Point Round #18 (Div. 3) TEST
// URL: https://codeforces.com/group/E1FstFkHSb/contest/376401/problem/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;

vector <int> X, Y;

int main(){
	double N, xx = 0, yy = 0, xy = 0;
	cin >> N;
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < N; j++){
			int num;
			cin >> num;
			if (i == 0){
				X.push_back (num);
				xx += num * num;
			}
			else {
				Y.push_back (num);
				yy += num * num;
			}
		}
	}
	xx = sqrt (xx);
	yy = sqrt (yy);
	for (int i = 0; i < N; i++){
		xy += X[i] * Y[i];
	}
	int ans = (xy / (xx * yy)) * 100;
	cout << fixed << setprecision (2) << (double) ans / 100 << '\n';
	return 0;
}