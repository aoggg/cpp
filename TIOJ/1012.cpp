#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector <int> target;
stack <int> fix, station; //fix -> 維修鐵路, station -> 中間ㄉ車站

int main(){
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++){
		int t;
		cin >> t;
		target.push_back (t);
	}
	int fnum = 0, out = 1, arrive = 0; 
	// fnum -> 停在維修鐵路上的車子 arrive -> 下一個要到的車子, out -> 下一個要出發的車子
	bool possible = true;
	while (arrive < N){
		if (out == target[arrive]){ //如果下一個車子就是他要的
			arrive++;
			out++;
		}
		else if (fix.size() != 0 && fix.top() == target[arrive]){
			arrive++;
			fnum--;
			fix.pop();
		}
		else if (station.size() != 0 && station.top() == target[arrive]){
			arrive++;
			station.pop();
		}
		//如果車子沒辦法一次移動到B, 移動順序 A -> station <-> fix
		else if (out < target[arrive]){ //下一個要的車子還沒出發
			station.push (out);
			out++;
		}
		else {//下一個要的在fix || station上
			bool found = false;
			while (fnum < M && station.size() > 0){ //先把車站的車子移到fix上直到他滿||找到下一輛
				fnum++;
				fix.push (station.top());
				station.pop();
				if (station.top() == target[arrive]){
					found = true;
					break;
				}
			}
			if (!found){
				while (fnum > 0 && fix.size() > 0){
					if (fix.top() == target[arrive]){
						found = true;
						break;
					}
					fnum--;
					station.push (fix.top());
					fix.pop();
				}
				if (!found){
					possible = false;
					break;
				}
			}
		}
	}
	if (possible){
		cout << "yes\n";
	}
	else {
		cout << "no\n";
	}
	return 0;
}