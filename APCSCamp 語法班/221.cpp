#include<iostream>
#include<algorithm>
#include<cstring>
#include "lib0221.h"
using namespace std;

bool com (char s1[], char s2[]){
	int res = strlen(s2) - strlen(s1);
	if (res != 0){
		return res > 0;
	}
	return strcmp(s2, s1) > 0;
}

void sort_by_length (char *strings[], int size){
	sort(strings, strings + size, com);
}
