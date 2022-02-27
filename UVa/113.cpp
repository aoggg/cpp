#include<iostream>
#include<cmath>
#include<iomanip> 
using namespace std;

int main(){
	double p;
	double n;
	while (cin >> n >> p){
		cout << fixed << setprecision(0) << pow (p, 1.0 / n) << '\n';	
	}
	return 0;
}
