// CSDC 10
// 2025-04-26

#include <iostream>
#include <vector>
#include <utility>
using namespace std;
using pii = pair<int, int>;
using vp = vector<pii>;

vector<vp> ans;
int total = 0;

void dfs(int now, int target, vp num) {
    if (target == 0) {
        total++;
        ans.push_back(num);
        return;
    }
    if (now == 1) {
        total++;
        num.push_back(make_pair(now, target));
        ans.push_back(num);
        return;
    }
    for (int i = target / now; i > 0; i--) {
        num.push_back(make_pair(now, i));
        dfs(now - 1, target - now * i, num);
        num.pop_back();
    }
    dfs(now - 1, target, num);
}

int main() 
{
    int N;
    scanf("%d", &N);
    vp num;
    dfs(N, N, num);
    printf("%d\n", total);
    for (int i = 0; i < total; i++) {
        bool printed = false;
        for (int j = 0; j < ans[i].size(); j++) {
            int times = ans[i][j].second;
            int n = ans[i][j].first;
            for (int t = 0; t < times; t++) {
                if (printed) printf(",");
                printed = true;
                printf("%d", n);
            }
        }
        puts("");
    }
    return 0;
}