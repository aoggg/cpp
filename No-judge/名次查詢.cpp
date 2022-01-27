#include<iostream>
using namespace std;

int score[200000], arr[200000];  

void merge ( int a, int b ){
	int middle = ( a + b ) / 2;
	for ( int i = a, j = middle + 1, k = a; k <= b; k++ ){
		if ( j > b || ( i <= middle && score[i] > score[j] ) ){
			arr[k] = score[i];
			i++;
		}
		else {
			arr[k] = score[j];
			j++;
		}
	}
	for ( int i = a; i <= b; i++ ){
		score[i] = arr[i];
	}
}

void cut ( int a, int b ){
	if ( a == b ){
		return;
	}
	int middle = ( a + b ) / 2;
	cut ( a, middle );
	cut ( middle + 1, b );
	merge ( a, b );
}

int main(){
	int n;
	cin >> n;
	for ( int i = 0; i < n; i++ ){
		cin >> score[i];
	}
	cut ( 0, n + 1 );
	int q;
	cin >> q;
	for ( int i = 0; i < q; i++ ){
		int k;
		cin >> k;
		cout << score[k - 1] << '\n';
	}
	return 0;
}
