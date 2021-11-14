#include"lib0223.h"
#include<iostream>
#include<cmath>
using namespace std;

bool solve_quadratic(int a, int b, int c, double &x1, double &x2){
	long long d=1LL*b*b-4LL*a*c;
	if(d<0){
		return false;
	}
	else{
		x1=(-b-sqrt(d))/(2*a);
		x2=(-b+sqrt(d))/(2*a);
		if(x1>x2){
			swap(x1, x2);
		} 
		return true;
	}
}
