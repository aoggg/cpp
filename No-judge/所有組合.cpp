#include<iostream>
using namespace std;

int ans[1000000];
bool take[1000001];

void counting (int N, int M, int num, int started){
	if (num == M){
		for (int i = 0; i < M; i++){
			if (i != 0){
				cout << ' ';
			}ㄋ
			cout << ans[i];
		}
		cout << '\n';
		return;
	}
	for (int i = started; i <= N; i++){
		if (!take[i]){
			take[i] = true;
			ans[num] = i;
			counting (N, M, num + 1, i + 1);
			take[i] = false;
		}
	}
}

int main(){
	int N, M;
	cin >> N >> M;
	counting (N, M, 0, 1);
	return 0;
}