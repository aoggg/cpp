#include<iostream>
#include<vector>
using namespace std;

int t[25][25]; 
vector<int> biggest;
vector<int> ans;

int main(){
    int N, M, S=0;
    cin>>N>>M;
    for(int i=1; i<=N; i++){
        int bigger;
        for(int j=1; j<=M; j++){
            cin>>t[i][j];
            if(j==1){
                bigger=t[i][j];
            }
            else if(bigger<t[i][j]){
                bigger=t[i][j];
            }
        }
        biggest.push_back(bigger);
    }
    for(int i=0; i<biggest.size(); i++){
        S+=biggest[i];
    }
    int num=0;
    for(int i=0; i<biggest.size(); i++){
        if(S%biggest[i]==0){
            ans.push_back(biggest[i]);
            num++;
        }
    }
    cout<<S<<"\n";
    if(num==0){
        cout<<"-1\n";
    }
    else{
        for(int i=0; i<num; i++){
            cout<<ans[i];
            if(i!=num-1){
                cout<<' ';
            }
        }
        cout<<'\n';
    }
    return 0;
}
