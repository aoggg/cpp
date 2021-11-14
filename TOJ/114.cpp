#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a[6][7], b, c, i, j, ans;
	ans=0;
	for(b=1; b<=5; b++){
		for(c=1; c<=6; c++){
			cin>>a[b][c];
		}
	}
	for(i=1; i<=5; i++){
		for(j=1; j<=3; j++){
			if(a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2]){
				ans=1;
				break;
			}
			else{
				continue;
			}
		}
	}
	for(j=1; j<=6; j++){
		for(i=1; i<=2; i++){
			if(a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j]){
				ans=1;
				break;
			}
			else{
				continue;
			}
		}
	}
	if(ans==0){
		cout<<"No\n";
	}
	else{
		cout<<"Yes\n";
	}
	
	return 0;
}
