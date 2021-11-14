#include<bits/stdc++.h>
using namespace std;

long long N, K, a[2165][1925], sita, t, s;
int main(){
	cin>>N>>K;
	cin>>sita;
	for(t=1; t<=N; t++){
		for(s=1; s<=K; s++){
			cin>>a[t][s];
		}
	}
	if(sita==0||sita==360){
		for(t=1; t<=N; t++){
			for(s=1; s<=K; s++){
				cout<<a[t][s];
				if(s!=K){
					cout<<" ";
				}
			}
			cout<<"\n";
		}
	}
	else if(sita==90){
		for(s=1; s<=K; s++){
			for(t=N; t>=1; t--){
				cout<<a[t][s];
				if(t!=1){
					cout<<" ";
				}
			}
			cout<<"\n";
		}
	}
	else if(sita==180){
		for(t=N; t>=1; t--){
			for(s=K; s>=1; s--){
				cout<<a[t][s];
				if(s!=1){
					cout<<" ";
				}
			}
			cout<<"\n";
		}
	}
	else{
		for(s=K; s>=1; s--){
			for(t=1; t<=N; t++){
				cout<<a[t][s];
				if(t!=N){
					cout<<" ";
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}
