// Atcoder abc382_d
// 2025-01-01

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
using vv = vector<vi>;

const int MAXN = 15;

int N, M;
int num = 0;
vv ans;
vi A;

void DFS(int depth, int now) {
    if (depth == N) {
        ans.push_back(A);
        num++;
        return;
    }
    for (int i = now + 10; i <= M - 10 * (N - 1 - depth); i++) {
        A.push_back(i);
        DFS(depth + 1, i);
        A.pop_back();
    }
}

int main() {
    scanf("%d%d", &N, &M);
    DFS(0, -9);
    printf("%d\n", num);
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < N; j++) {
            if (j != 0) printf(" ");
            printf("%d", ans[i][j]);
        }
        puts("");
    }
    return 0;
}