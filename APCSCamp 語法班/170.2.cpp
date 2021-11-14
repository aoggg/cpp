#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x;
	cin>>x;
	if(x!=1){
		do{
			cout<<x<<" -> ";
			if(x%2==1){
				x=x*3+1;
			}
			else{
				x/=2;
			}
		}while(x!=1);
	}
	cout<<x<<" -> end\n";
	return 0;
}
