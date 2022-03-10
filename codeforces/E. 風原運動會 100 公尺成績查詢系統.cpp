#include<iostream>
#include<algorithm>
using namespace std;

double a[10];

int main(){
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> a[i]; 
	}
	sort (a, a + N);
	int T;
	cin >> T;
	cout << a[T - 1] << '\n';
	return 0;
}
