#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x;
	cin>>x;
	start:
		if(x==1){
			cout<<x<<" -> end\n";
		}
		else{
			cout<<x<<" -> ";
			if(x%2==1){
				x=x*3+1;
			}
			else{
				x/=2;
			}
			goto start;
		}
		
	return 0;
}
