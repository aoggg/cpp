#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, i, j;
	cin>>N;
	if(N==0){
		cout<<"Nothing\n";
	}
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			if(i%2==1&&j%2==1){
				cout<<"*";
			}
			else if(i%2==1&&j%2==0){
				cout<<"-";
			}
			else if(i%2==0&&j%2==1){
				cout<<"-";
			}
			else{
				cout<<"*";
			}
		}
		cout<<"\n";
	}
	return 0;
}
