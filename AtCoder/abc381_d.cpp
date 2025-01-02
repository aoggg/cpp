// Atcoder abc381_d
// 2025-01-02

#include <iostream>
#include <vector>
#include <utility>
#define mkp(a,b) make_pair(a,b)
using namespace std;
using pii = pair<int, int>;
using vp = vector<pii>;

const int MAXN = 2e5 + 5;

vp info;
bool ap[MAXN];
int A[MAXN];

void clear(int *l, int *r) {
    while ((*l) < (*r)) {
        ap[info[(*l)].first] = false;
        (*l)++;
    }
    ap[info[(*l)].first] = false;
}

void del(int *l, int *r, int *now, int num) {
    (*l)++;
    while (info[(*l)].first != num) {
        ap[info[(*l)].first] = false;
        (*l)++;
        (*now) -= 2;
    }
    ap[info[(*l)].first] = false;
    (*now) -= 2;
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i <= N; i++) ap[i] = false;
    for (int i = 0; i < N; i++) scanf("%d", A + i);
    info.clear();
    info.push_back(mkp(0, -1));
    for (int i = 0; i < N; i++) {
        int num = A[i];
        int times = 0;
        for (i; i < N && A[i] == num; i++) times++;
        i--;
        info.push_back(mkp(num, times));
    }
    int l = 0, r = 0;
    int ans = 0;
    int now = 0;
    for (int i = 1; i < info.size(); i++) {
        int num = info[i].first;
        int times = info[i].second;
        if (times < 2) {
            clear(&l, &r);
            l = r = i;
            now = 0;
        }
        else if (times == 2) {
            if (ap[num]) {
                del(&l, &r, &now, num);
            }
            r = i;
            ap[num] = true;
            now += 2;
        }
        else {
            if (!ap[num])
                now += 2;
            ans = max(ans, now);
            clear(&l, &r);
            r = i;
            ap[num] = true;
            now = 2;
        }
        ans = max(ans, now);
    }
    ans = max(ans, now);
    printf("%d\n", ans);
    return 0;
}