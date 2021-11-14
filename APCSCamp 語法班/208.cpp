#include<iostream>
using namespace std;

int height[105][105], the_lower[105][105];

int main(){
	int n, m, L;
	cin>>n>>m>>L;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>height[i][j];
		}
	}
	int flood=0;
	int low, low2;
	low2=0; 
	while(L>0&&flood<n*m){
		low=low2;
		low2=105;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(the_lower[i][j]==0){
					if(low2>height[i][j]){
						low2=height[i][j];
					}
				}
			}
		}
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(the_lower[i][j]==0){
					if(height[i][j]==low){
						the_lower[i][j]=1;
						flood+=1;
					}
				}
			}
		}
		L-=(low2-low)*flood;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cout<<the_lower[i][j];
			if(j!=m){
				cout<<' ';
			}
		}
		cout<<'\n';
	}
	return 0;
} 
