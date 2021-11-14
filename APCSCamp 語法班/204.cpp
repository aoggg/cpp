#include<iostream>
using namespace std;

int nm[105][105];

int main(){
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			nm[i][j]=m*(i-1)+j;
		}
	}
	for(int i=1; i<=n; i++){
		if(i%2==1){
			for(int j=1; j<=m; j++){
				cout<<nm[i][j]<<' ';
			}
		}
		else{
			for(int j=m; j>=1; j--){
				cout<<nm[i][j]<<' ';
			}
		}
		cout<<'\n';
	}
	return 0;
} 
