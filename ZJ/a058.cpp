#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, t, a, b, c, i;
	cin>>n;
	a=0;
	b=0;
	c=0;
	for(t=1; t<=n; t++){
		cin>>i;
		if(i%3==0){
			a+=1;
		} 
		else if(i%3==1){
			b+=1;
		}
		else{
			c+=1;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<"\n";
	return 0;
}
