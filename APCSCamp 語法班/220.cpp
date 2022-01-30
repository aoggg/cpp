#include<iostream>
#include "lib0220.h"
using namespace std;

double average (int scores[], int N){
	double sum = 0;
	for (int i = 0; i < N; i++){
		sum += scores[i];
	}
	return sum / N;
}
