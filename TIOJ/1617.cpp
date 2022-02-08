#include<iostream>
#include "lib1617.h"
using namespace std;

int n;
bool not_mid[1500];

int main(){
	n = Get_Box();
	int a, b;
	for (int time = 0; time < n / 2; time++){
		bool first = true;
		for (int i = 1; i <= n; i++){
			if (not_mid[i]){
				continue;
			}
			if (first){
				first = true;
				a = i;
				while (not_mid[i]){
					i++;
				}
				b = i;
				while (not_mid[i]){
					i++;
				}
			}
			int mid = Med3(a, b, i);
			cout << mid << '\n';
			if (mid == a){
				a = i;
			}
			else if (mid == b){
				b = i;
			}
		}
		not_mid[a] = true;
		not_mid[b] = true;
		cout << a << ' ' << b << '\n';
	}
	for (int i = 1; i <= n; i++){
		if (!not_mid[i]){
			Report (i);
		}
	}
	return 0;
}
