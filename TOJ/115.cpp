#include<bits/stdc++.h>
using namespace std;

int main(){
	string a[15], d;
	long long b, c, N, t, s;
	for(b=1;b<=10; b++){
		a[b]="EMPTY";
	}
	cin>>N;
	for(c=1; c<=N; c++){
		cin>>d>>t;
		a[t]=d;
	}
	for(s=1; s<=10; s++){
		cout<<a[s]<<"\n";
	}
	return 0;
}
