#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, vote, time, x, ans;
	cin>>N>>x;
	time=1;
	ans=0;
	while(time<=N){
		cin>>vote;
		if(vote==x){
			ans++;
		}
		time++;
	}
	if(ans==N){
		cout<<"2\n";
	}
	else if(ans>=1){
		cout<<"1\n";
	}
	else{
		cout<<"0\n";
	}
	return 0;
}
