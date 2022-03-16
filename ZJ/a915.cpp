#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

vector <pair <int, int>> spot;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		spot.push_back ({x, y});
	}
	sort (spot.begin (), spot.end ());
	for (int i = 0; i < n; i++){
		cout << spot[i].first << ' ' << spot[i].second << '\n'; 
	}
	return 0;
}