#include<iostream>
using namespace std;

int N, ans = 0;
bool chess[14][14], visited[14];

void playing (int num){ //num -> 放ㄉ數量
	if (num == N){
		ans++;
		return ;
	}
	for (int i = 0; i < N; i++){
		if (visited[i]){
			continue;
		}
		bool possible = true;
		for (int j = 1; j < N && num - j >= 0 && (i - j >= 0 || i + j < N); j++){
			if ((i - j >= 0 && chess[num - j][i - j]) || (i + j <= N && chess[num - j][i + j])){
				possible = false;
				break;
			}
		}
		if (possible){
			visited[i] = true;
			chess[num][i] = true;
			playing (num + 1);
			chess[num][i] = false;
			visited[i] = false;
		}
	}
	return ;
}

int main(){
	cin >> N;
	playing (0);
	cout << ans << '\n';
	return 0;
}