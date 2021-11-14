#include<iostream>
using namespace std;

int nn[105][105];

int main(){
	int n, num;
	cin>>n;
	num=1;
	for(int i=n; i>=(n+1)/2; i--){
		int j, k;
		for(j=n-i+1; j<=i; j++){
			nn[j][i]=num;
			num++;
		}
		j--;
		for(k=i-1; k>=n-i+1; k--){
			nn[j][k]=num;
			num++;
		}
		k++;
		for(j--; j>=n-i+1; j--){
			nn[j][k]=num;
			num++;
		}
		j++;
		for(k++; k<=i-1; k++){
			nn[j][k]=num;
			num++;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<nn[i][j];
			if(j!=n){
				cout<<" ";
			}
		}
		cout<<'\n';
	}
	return 0;
} 
