#include<iostream>
#include<queue>
using namespace std;

priority_queue <int> bigger; //以最大優先 -> 左半邊
priority_queue <int, vector <int>, greater <int>> smaller; //以最小優先 -> 右半邊

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int n;
	while (cin >> n){
		if (n == 0){
			break;
		}
		if (bigger.size() == smaller.size()){ //當前數列有奇數個數?
			if (bigger.size() == 0 || n < bigger.top()){
				bigger.push (n); // 把數字放到左半邊
			}
			else {
				smaller.push (n);
			}
			if (bigger.size() > smaller.size()){
				cout << bigger.top() << '\n';
			}
			else {
				cout << smaller.top() << '\n';
			}
		}
		else { //當前數列有偶數個數
			if (n < bigger.top()){ //他應該要放到左邊
				bigger.push (n);
				if (bigger.size() > smaller.size()){ //可是左邊的序列比較長
					smaller.push (bigger.top());
					bigger.pop();
				}
			}
			else {
				smaller.push (n);
				if (smaller.size() > bigger.size()){
					bigger.push (smaller.top());
					smaller.pop();
				}
			}
			cout << (smaller.top() + bigger.top()) / 2 << '\n';
		}
	}
	return 0;
}