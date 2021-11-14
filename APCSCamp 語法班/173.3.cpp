#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x, time;
	cin>>x;
	if(x==1){
		cout<<"No\n";
		return 0;
	}
	for(time=2; time<=sqrt(x); time++){
		if(x%time==0){
			cout<<"No\n";
			return 0;
		}
	}
	cout<<"Yes\n";
	return 0;
} 
