#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c;
	cin>>a>>b>>c;
	if(a==0){
		if(b==0){
			if(c==0){
				cout<<"AND\n";
				cout<<"OR\n";
				cout<<"XOR\n";
			}
			else{
				cout<<"IMPOSSIBLE\n";
			}
		}
		else{
			if(c==0){
				cout<<"AND\n";
			}
			else{
				cout<<"OR\n";
				cout<<"XOR\n";
			}
		}
	}
	else{//a!=0
		if(b==0){
			if(c==0){
				cout<<"AND\n";
			}
			else{
				cout<<"OR\n";
				cout<<"XOR\n";
			}
		}
		else{
			if(c==0){
				cout<<"XOR\n";
			}
			else{
				cout<<"AND\n";
				cout<<"OR\n";
			}
		}
	}
	return 0;
}
