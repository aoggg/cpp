#include<iostream>
using namespace std;

long long a[1005];

int main(){
	long long N, Q, time, t, x, y, z, i;
	cin>>N>>Q;
	for(time=1; time<=N; time++){
		cin>>a[time];
	}
	for(i=1; i<=Q; i++){
		cin>>t;
		if(t==1){
			cin>>x>>y>>z;
			for(long long j=x; j<=y; j++){
				a[j]+=z;
			}
		}
		else if(t==2){
			cin>>x>>y;
			if(y<x){
				for(long long j=y; j<=(x+y)/2; j++){
					swap(a[j], a[x+y-j]);
				}
			}
			else{
				for(long long j=x; j<=(x+y)/2; j++){
					swap(a[j], a[x+y-j]);
				}
			}
		}
		else{
			cin>>x>>y;
			long long ans;
			for(long long j=x; j<=y; j++){
				if(j==x){
					ans=a[j];
				}
				else if(ans<=a[j]){
					ans=a[j];
				} 
			}
			cout<<ans<<"\n";
		}
	}
	return 0;
}
