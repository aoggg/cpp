#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, i, j;
	cin>>n>>m;
	for(i=1; i<=m; i++){
		for(j=1; j<=n; j++){
			cout<<i<<"*"<<j<<"="<<i*j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
