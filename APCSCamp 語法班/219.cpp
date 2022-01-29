#include<iostream>
#include "lib0219.h"
using namespace std;

void selection_sort (int arr[], int size){
	for (int i = 0; i < size; i++){
		int smallest = i;
		for (int j = i + 1; j < size; j++){
			if (arr[j] < arr[smallest]){
				smallest = j;
			}
		}
		swap (arr[i], arr[smallest]);
	}
}
