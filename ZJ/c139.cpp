#include<iostream>
using namespace std;

bool can_walk[6][6], visited[6][6];
int ans[10];

void route(){
	can_walk[1][2] = true;
	can_walk[1][3] = true;
	can_walk[1][5] = true;
	can_walk[2][1] = true;
	can_walk[2][3] = true;
	can_walk[2][5] = true;
	can_walk[3][1] = true;
	can_walk[3][2] = true;
	can_walk[3][4] = true;
	can_walk[3][5] = true;
	can_walk[4][3] = true;
	can_walk[4][5] = true;
	can_walk[5][1] = true;
	can_walk[5][2] = true;
	can_walk[5][3] = true;
	can_walk[5][4] = true;
	return;
}

void walking (int point, int steps){
	if (steps == 8){
		for (int i = 0; i < 9; i++){
			cout << ans[i];
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= 5; i++){
		if (can_walk[point][i]){
			if (visited[point][i]){
				continue;
			}
			ans[steps + 1] = i;
			visited[point][i] = true;
			visited[i][point] = true;
			walking (i, steps + 1);
			visited[point][i] = false;
			visited[i][point] = false;
		}
	}
}

int main(){
	route();
	ans[0] = 1;
	walking (1, 0);
	return 0;
}
