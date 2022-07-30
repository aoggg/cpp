#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int Q;
	cin >> Q;
	for (int time = 0; time < Q; time++){
		long long n, k, m;
		cin >> n >> k >> m;
		if (k < n){
			cout << "penguin\n";
		}
		else {
			cout << "Ginorz\n";
		}
	}
	return 0;
}
