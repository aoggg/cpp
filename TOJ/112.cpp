#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[15], N, t, s;
	cin>>N;
	for(t=1; t<=N; t++){
		cin>>a[t];
	}
	for(s=N; s>=1; s--){
		cout<<a[s]<<"\n";
	}
	return 0;
}

