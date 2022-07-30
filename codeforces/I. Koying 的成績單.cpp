// Problem: I. Koying 的成績單
// Contest: Codeforces - Ten Point Round #18 (Div. 3) TEST
// URL: https://codeforces.com/group/E1FstFkHSb/contest/376401/problem/I
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<algorithm>
using namespace std;

struct score {
    int subject[7];
    int num;
};

int sub, ranks[200000][7];
score student[200000];

bool cmp (score a, score b){
    if (a.subject[sub] > b.subject[sub]){
        return true;
    }
    if (a.subject[sub] < b.subject[sub]){
        return false;
    }
    if (a.num < b.num){
        return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio (false);
    cin.tie (0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        student[i].num = i;
        student[i].subject[6] = 0;
        for (int j = 0; j < 6; j++){
            cin >> student[i].subject[j];
            student[i].subject[6] += student[i].subject[j];
        }
    }
    for (sub = 0; sub < 7; sub++){
        sort (student, student + n, cmp);
        for (int i = 0; i < n; i++){
            ranks[student[i].num][sub] = i + 1;
        }
    }
    int q;
    cin >> q;
    for (int ask = 0; ask < q; ask++){
        int p, s;
        cin >> p >> s;
        p--;
        s--;
        cout << ranks[p][s] << '\n';
    }
    return 0;
}