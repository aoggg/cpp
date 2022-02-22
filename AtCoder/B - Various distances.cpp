#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

long long x[100000];

int main(){
	int N;
	cin >> N;
	long long most = 0, manhattan = 0, euclidian = 0;
	for (int i = 0; i < N; i++){
		cin >> x[i];
		if (x[i] < 0){
			x[i] = -x[i];
		}
		most = max (most, x[i]);
		manhattan += x[i];
		euclidian += x[i] * x[i];
	}
	cout << manhattan << '\n';
	cout << fixed << setprecision(15) << double (sqrt (euclidian)) << '\n';
	cout << most << '\n';
	return 0;
}
