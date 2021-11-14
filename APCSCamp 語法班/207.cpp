#include<iostream>
using namespace std;

int table[105][105], score[105];

int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>table[i][j];
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(table[i][j]>table[j][i]){
				score[i]++;
			}
			else if(table[i][j]<table[j][i]){
				score[j]++;
			}
		}
	}
	for(int i=1; i<=n; i++){
		cout<<score[i]/2;
		if(i!=n){
			cout<<' ';
		}
	}
	cout<<'\n';
	return 0;
}
