#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[35][35];
	long long T, N, M, n, m, t, s, x, y, ans;
	cin>>T;
	for(t=1; t<=T; t++){
		cin>>N>>M;
		for(n=1; n<=N; n++){
			for(m=1; m<=M; m++){
				cin>>a[n][m];
			}
		}
		ans=0;
		for(n=1; n<=N; n++){
			for(m=1; m<=M; m++){
				if(a[n][m]=='*'){
					x=n;
					y=m;
					ans=1;
					break;
				}
				else{
					continue;
				}
			}
		}
		if(ans==1){
			cout<<x<<" "<<y<<"\n";
		}
		else{
			cout<<"I CAN'T FIND IT QQ\n";
		}
	}
	return 0;
}
