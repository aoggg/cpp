#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, f[50], time, num;
	cin>>N;
	f[1]=1;
	f[2]=1;
	for(time=3; time<=N; time++){
		f[time]=f[time-1]+f[time-2];
	}
	for(num=1; num<=N; num++){
		cout<<f[num];
		if(num!=N){
			cout<<" ";
		}
		else{
			cout<<"\n";
		}
	}
	return 0;
}
