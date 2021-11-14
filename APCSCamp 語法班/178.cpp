#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, time, a, b, c, d;
	cin>>N;
	time=1;
	while(time<=N){
		cin>>a>>b>>c>>d;
		if(a==0){
			if(b==0){
				cout<<"C";
			}
			else{
				if(c==0){
					cout<<"A";
				}
				else{
					cout<<"B";
				}
			}
		}
		else{
			if(b==0){
				cout<<"E";
			}
			else{
				if(d==1){
					cout<<"D";
				}
				else{
					cout<<"F";
				}
			}
		}
		time++;
	}
	cout<<"\n";
	return 0;
}
