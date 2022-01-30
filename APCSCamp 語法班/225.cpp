#include<iostream>
#include "lib0225.h"
#include<iostream>
#include<cmath>
using namespace std;

int factorize (int x, int primes[], int powers[]){
	int n = 0;
	for (int i = 2; i <= sqrt(x); i++){
		bool d = false;
		while (x % i == 0){
			d = true;
			x /= i;
			powers[n]++;
		}
		if (d){
			primes[n] = i;
			n++;
		}
	}
	if (x != 1){
		powers[n] = 1;
		primes[n] = x;
		n++;
	}
	return n;
}
