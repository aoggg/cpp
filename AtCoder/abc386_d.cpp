// Atcoder abc386_d
// 2024-12-28

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAXM = 2e5 + 5;

struct Info {
    int x, y;
    char c;
};

typedef vector<Info> vi;

bool cmp(Info a, Info b) {
    if (a.x == b.x) return a.y < b.y; 
    return a.x < b.x;
}

int main() {
    int N, M;
    cin >> N >> M;
    vi cell;
    for (int i = 0; i < M; i++) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        Info nc;
        nc.x = x;
        nc.y = y;
        nc.c = c;
        cell.push_back(nc);
    }
    sort(cell.begin(), cell.end(), cmp);
    int num = N + 1;
    bool check = true;
    for (int i = 0; i < cell.size(); i++) {
        switch (cell[i].c) {
            case 'B':
                if (cell[i].y > num && num != N + 1) check = false;
                break;
            
            default:
                num = min(cell[i].y - 1, num);
                break;
        }
    }
    if (check) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}