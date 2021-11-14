#include<iostream>
using namespace std;

int A[105][105], B[105][105], AB[105][105];

int main(){
	int r1, c1, r2, c2;
	cin>>r1>>c1>>r2>>c2;
	for(int i=1; i<=r1; i++){
		for(int j=1; j<=c1; j++){
			cin>>A[i][j];
		}
	}
	for(int i=1; i<=r2; i++){
		for(int j=1; j<=c2; j++){
			cin>>B[i][j];
		}
	}
	if(c1!=r2){
		cout<<"no answer\n";
	}
	else{
		for(int i=1; i<=r1; i++){
			for(int j=1; j<=c2; j++){
				for(int k=1; k<=r2; k++){
					AB[i][j]+=A[i][k]*B[k][j];
				}
			}
		}
		for(int i=1; i<=r1; i++){
			for(int j=1; j<=c2; j++){
				cout<<AB[i][j]<<' ';
			}
			cout<<'\n';
		}
	}
	return 0;
}
