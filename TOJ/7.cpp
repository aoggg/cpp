#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	long long a[27], N, M, t, i, c, j;
	cin>>N;
	for(t=1; t<=N; t++){
		cin>>M;
		for(i=0; i<=M; i++){
			cin>>a[i];
		}
		for(c=M; c>=1; c--){
			for(j=0; j<=c-1; j++){
				a[j]=a[j+1]-a[j];
			}
		}
		cout<<a[0]<<"\n";
	}
	return 0;
}
