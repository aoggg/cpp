#include "lib0217.h"
using namespace std;

int median (int a, int b, int c){
	if ( (a <= b && a >= c) || (a >= b && a <= c) ){
		return a;
	}
	if ( (b >= a && b <= c) || (b <= a && b >= c) ){
		return b;
	}
	return c;
}
