#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double NCOWS, NCARS, NSHOW;
	while (cin >> NCOWS >> NCARS >> NSHOW){
		double door = NCOWS + NCARS;
		cout << fixed << setprecision(5) << ((NCARS / door) * (NCARS - 1) / (door - NSHOW - 1)) + (NCOWS / door) * (NCARS / (door - NSHOW - 1)) << '\n';
	}
	return 0;
}
