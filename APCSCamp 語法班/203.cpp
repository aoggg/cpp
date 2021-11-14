#include<iostream>
using namespace std;

string s_a[10][10];

int run(string s){
	if(s=="1B"){
		return 1;
	}
	else if(s=="2B"){
		return 2;
	}
	else if(s=="3B"){
		return 3;
	}
	else{
		return 4;
	}
}

int main(){
	int a[10], b;
	for(int i=1; i<=9; i++){
		cin>>a[i];
		for(int j=1; j<=a[i]; j++){
			cin>>s_a[i][j];
		}
	}
	cin>>b;
	int out1=0, people[4]={0,}, score=0, out2=0;
	//out1 當下的
	// out2 前一次的 
	for(int i=1; i<=9; i++){
		for(int j=1; j<=a[i]; j++){
			for(int k=1; k<=9; k++){
				if(s_a[k][j]=="SO"||s_a[k][j]=="FO"||s_a[k][j]=="GO"){
					out1++;
					if(out1>=b){
						goto end;
					}
				}
				else{
					int m;
					for(int o=0; o<3; o++){
						for(int p=2; p>=o; p--){
							if(people[p]<=people[p+1]){
								swap(people[p], people[p+1]);
							}
						}
					}
					for(m=0; m<4&&people[m]!=0; m++);
					for(int n=0; n<=m; n++){
						people[n]+=run(s_a[k][j]);
						if(people[n]>=4){
							people[n]=0;
							score++;
						}
					}
				}
				if(out1%3==0&&out2%3!=0){
					for(int l=0; l<4; l++){
						people[l]=0;
					}
				}
				out2=out1;
			}
		}
	}
	end:
	cout<<score<<"\n";
	return 0;
} 
