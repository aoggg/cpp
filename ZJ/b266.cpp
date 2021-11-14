#include<iostream>
using namespace std;

int B[15][15], action[15], A[15][15];

int main(){
	int R, C, M;
	cin>>R>>C>>M;
	for(int i=1; i<=R; i++){
		for(int j=1; j<=C; j++){
			cin>>B[i][j];
		}
	}
	for(int i=1; i<=M; i++){
		cin>>action[i];
	}
	for(int i=M; i>=1; i--){
		if(!action[i]){
			swap(R, C);
			for(int j=1; j<=R; j++){
				for(int k=1; k<=C; k++){
					A[j][k]=B[k][1+(R-j)];
				}
			}
			for(int j=1; j<=R; j++){
				for(int k=1; k<=C; k++){
					B[j][k]=A[j][k];
				}
			}
		}
		else{
			for(int j=1; j<=(R+1)/2; j++){
				for(int k=1; k<=C; k++){
					swap(B[j][k], B[R-(j-1)][k]);
				}
			}
		}
	}
	cout<<R<<' '<<C<<'\n';
	for(int i=1; i<=R; i++){
		for(int j=1; j<=C; j++){
			cout<<B[i][j];
			if(j!=C){
				cout<<' ';
			}
		}
		cout<<'\n';
	}
	return 0;
} 
