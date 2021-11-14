#include<iostream>
using namespace std;

long long num[1005];

int main(){
	long long n, time, last, time1, time2;
	cin>>n;
	for(time=1; time<=n; time++){
		cin>>num[time];
	}
	for(time=1; time<n; time++){
		for(time1=n-1; time1>=time; time1--){
			if(num[time1]>=num[time1+1]){
				swap(num[time1], num[time1+1]);
			}
		}
	}
	for(time=1; time<=n; time++){
		cout<<num[time];
		if(time!=n){
			cout<<" ";
		}
		else{
			cout<<"\n";
		}
	}
	return 0;
}
