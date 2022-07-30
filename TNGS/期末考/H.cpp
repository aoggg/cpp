#include<iostream>
using namespace std;

long long a[3];
bool taked[3];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int Q;
	cin >> Q;
	for (int time = 1; time <= Q; time++){
		for (int i = 0; i < 3; i++){
			cin >> a[i];
		}
		long long a1, a2, a3;
		long long most;
		bool first = true;
		for (int i = 0; i < 3; i++){
			a1 = a[i];
			taked[i] = true;
			for (int j = 0; j < 3; j++){
				if (!taked[j]){
					a2 = a[j];
					taked[j] = true;
					long long num = 0;
					for (int k = 0; k < 3; k++){
						if (!taked[k]){
							a3 = a[k];
							num = ((a1 ^ a2 ^ a3) | (a1 | (a2 ^ a3))) + (a1 ^ a3) + (a1 | a2 | a3) + ((a3 | a1) ^ ((a1 + a2) | a3));
							if (first || num > most){
								first = false;
								most = num;
							}
							break;
						}
					}
					taked[j] = false;
				}
			}
			taked[i] = false;
		}
		cout << most << '\n';
	}
	return 0;
}
