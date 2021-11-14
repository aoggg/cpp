#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long N, time;
	cin>>N;
	for(time=2; time<=sqrt(N); time++){
		if(N%time==0){
			cout<<time;
			if(N/time!=1){
				cout<<" ";
			}
			N/=time;
			time--;
		}
	}
	if(N!=1){
		cout<<N<<"\n";
	}
	return 0;
}
