#include<iostream>
using namespace std;

int main(){
	long long m, n, x, y, Q, time1, time2, time3;
	char instruction;
	cin>>n>>m>>x>>y>>Q;
	for(time1=1; time1<=Q; time1++){
		cin>>instruction;
		if(instruction=='W'){
			if(x!=0){
				x--;
			}
		}
		else if(instruction=='A'){
			if(y!=0){
				y--;
			}
		}
		else if(instruction=='S'){
			if(x!=n-1){
				x++;
			}		
		}
		else{
			if(y!=m-1){
				y++;
			}
		}
		for(time2=0; time2<n; time2++){
			for(time3=0; time3<m; time3++){
				if(time2==x&&time3==y){
					cout<<"@";
				}
				else{
					cout<<".";
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}
