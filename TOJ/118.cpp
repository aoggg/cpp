#include<bits/stdc++.h>
using namespace std;
long long a[1005];
int main(){
	long long M, N, t, s, c, d, i;
	cin>>N;
	for(t=1; t<=N; t++){
		cin>>i>>a[i];
	}
	cin>>M;
	for(s=1; s<=M; s++){
		cin>>c>>d;
		if(a[c]*c>=d){
			cout<<"The shopkeeper is honest.\n";
		}
		else{
			cout<<d-a[c]*c<<"\n";
		}
	}
	return 0;
}
