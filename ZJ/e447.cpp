#include<iostream>
#include<queue>
using namespace std;

queue <int> num;

int main(){
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		int k;
		cin >> k;
		if (k == 1){
			int x;
			cin >> x;
			num.push (x);
		}
		else if (k == 2){
			if (num.size () == 0){
				cout << -1 << '\n';
			}
			else {
				cout << num.front () << '\n';
			}
		}
		else {
			if (num.size () != 0){
				num.pop ();
			}
		}
	}
	return 0;
}