#include <bits/stdc++.h>
using namespace std;
#define Gura_is_cute ios_base::sync_with_stdio(0);cin.tie(0)
#define mp make_pair
#define pb push_back
#define ll long long
#define lli long long int
#define F first 
#define S second
lli n, q, a[2000005], s[2000005][2], ans[2000005];
vector<int> pos[1000005];
vector<pair<int, int>> v[1000005];
map<pair<pair<int, int>, int>, vector<int>> m;
void upd1(int idx, lli v){
    for(int i=idx;i<=n;i+=i&-i){
        s[i][1]+=v;
    }
}
void upd(int idx, lli v){
    for(int i=idx;i<=n;i+=i&-i){
        s[i][0]+=v;
    }
}
lli sum1(int idx){
    lli res=0;
    for(int i=idx;i>0;i-=i&-i){
        res+=s[i][1];
    }
    return res;
}
lli sum(int idx){
    lli res=0;
    for(int i=idx;i>0;i-=i&-i){
        res+=s[i][0];
    }
    return res;
}
void sol(){
    cin >> n >> q;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        upd(i, a[i]);
        pos[a[i]].pb(i);
    }
    for(int i=1;i<=q;i++){
        int l, r, k;
        cin >> l >> r >> k;
        m[mp(mp(l, r), k)].pb(i);
        v[k].pb(mp(l, r));
    }
    for(lli i=1;i<=100000;i++){
        for(int it : pos[i]){
            upd(it, -i);
            upd1(it, 1);
        }
        // cout << "now using " << i << endl;
        // for(int k=1;k<=n;k++)cout << sum(k) << " ";
        // cout << endl << endl;
        for(int j=0;j<v[i].size();j++){
            int l = v[i][j].F, r=v[i][j].S;
            //cout << sum(r)-sum(l-1) << " " << sum1(r)-sum1(l-1) << endl;
            lli cal = sum(r)-sum(l-1) + i*(sum1(r)-sum1(l-1));
            for(int k=0;k<m[mp(mp(l, r), i)].size();k++) ans[m[mp(mp(l, r), i)][k]]=cal;
        }
    }
    for(int i=1;i<=q;i++)cout << ans[i]*(lli)2 << endl;
}
int main(){
    Gura_is_cute;
    int t=1;
    while(t--){
        sol();
    }
}