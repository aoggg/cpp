#include<iostream>
using namespace std;

int main(){
	long long N, A[1005], B[1005], timeA, timeB, ans, num;
	cin>>N;
	ans=0
	for(timeA=1; timeA<=N; timeA++){
		cin>>A[timeA];
	}
	for(timeB=1; timeB<=N; timeB++){
		cin>>B[timeB];
	}
	for(num=1; num<=N; num++){
		ans+=A[num]*B[num];
	}
	cout<<ans<<"\n";
	return 0;
}
