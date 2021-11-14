#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, total, T, time;
	cin>>T;
	time=1;
	while(time<=T){
		cin>>N;
		total=(1+N)*N/2;
		if((total%4)%2==1){
			cout<<"Bob\n";
		}
		else{
			cout<<"Alice\n";
		}
		time++;
	}
	return 0;
} 
