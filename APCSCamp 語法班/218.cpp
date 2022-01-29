#include "lib0218.h"
#include<algorithm>
using namespace std;

long long N (long long a){
	if (a < 0){
		return -a;
	}
	return a;
}

int com (int a, int b){
	if (N(a) == N(b)){
		return a < b;
	}
	return N(a) < N(b);
}

void sort_by_abs (int arr[], int size){
	sort (arr, arr+size, com);
	return;
}
