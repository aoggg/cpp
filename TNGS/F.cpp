#include<iostream>
using namespace std;

long long a[70];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	for (int i = 0; i < 10; i++){
		cin >> a[i];
	}
	long long la = 10;
	int Q;
	cin >> Q;
	for (int time = 1; time <= Q; time++){
		long long u, k;
		cin >> u >> k;
		if (u == 1){
			a[la] = k;
			la++;
		} 
		else {
			for ( long long i = 1; i < la; i++ ){
				for ( long long j = 0; j < la - i; j++ ){
					if ( a[j] < a[j + 1] ){
						swap ( a[j], a[j + 1] );
					}
				}
			}
			cout << a[k - 1] << '\n';
		}
	}
	return 0;
}
