#include<iostream>
using namespace std;

int CS[1005], E[1005];

int main(){
	int T;
	cin >> T;
	for ( int time = 1; time <= T; time++ ){
		double average_e, amount_e, amount_cs, average_cs; 
		int Ncs, Ne, amount;
		amount_cs = 0;
		amount_e = 0;
		amount = 0;
		cin >> Ncs >> Ne;
		for ( int i = 0; i < Ncs; i++ ){
			cin >> CS[i];
			amount_cs += CS[i];
		}
		average_cs = amount_cs / Ncs;
		for ( int i = 0; i < Ne; i++ ){
			cin >> E[i];
			amount_e += E[i];
		}
		average_e = amount_e / Ne;
		for ( int i = 0; i < Ncs; i++ ){
			if ( CS[i] > average_e && CS[i] < average_cs ){
				amount++;
			}
		}
		cout << amount << '\n';
	}
	return 0;
}
