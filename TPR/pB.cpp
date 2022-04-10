#include<iostream>
#include<vector>
using namespace std;

int a[100000];
vector <int> day;

int main(){
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int l;
	bool F = true;
	for (int i = 1; i <= n; i++){
		int thing;
		cin >> thing;
		if (thing >= k){
			l += thing;
		}
		if (l >= a[i]){
			day.push_back (i);
			l = 0;
		}
	}
	cout << day.size() << '\n';
	for (int i = 0; i < day.size(); i++){
		if (i != 0){
			cout << ' ';
		}
		cout << day[i];
	}
	cout << '\n';
	return 0;
}