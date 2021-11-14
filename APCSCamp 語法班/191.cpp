#include<iostream>
using namespace std;

long long a[100005], b[100005], c[100005];

int main(){
	long long N, M, time, num;
	bool action;
	cin>>N>>M>>action;
	for(time=1; time<=N; time++){
		cin>>a[time];
	}
	for(time=1; time<=M; time++){
		cin>>b[time];
	}
	for(time=1; time<=max(N, M); time++){
		if(action){
			if(c[time]+a[time]<b[time]){
				c[time]+=a[time]+10-b[time];
				c[time+1]--;
			}
			else{
				c[time]+=a[time]-b[time];
			}
		}
		else{
			if(a[time]+b[time]+c[time]>=10){
				c[time]+=a[time]+b[time]-10;
				c[time+1]++;
			}
			else{
				c[time]+=a[time]+b[time];
			}
		}
	}
	for(num=max(N, M)+1; c[num]==0; num--);
	for(time=1; time<=num; time++){
		cout<<c[time];
		if(time!=num){
			cout<<" ";
		}
		else{
			cout<<"\n";
		}
	}
	return 0;
}
