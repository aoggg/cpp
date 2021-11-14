#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x, y, z, a, b, c;
	cin>>x>>y>>z;
	if(x<=y&&x<=z){
		a=x;
		if(y<=z){
			b=y;
			c=z;
		}
		else{
			b=z;
			c=y;
		}
	}
	else if(y<=x&&y<=z){
		a=y;
		if(x<=z){
			b=x;
			c=z;
		}
		else{
			b=z;
			c=x;
		}
	}
	else{
		a=z;
		if(x<=y){
			b=x;
			c=y;
		}
		else{
			b=y;
			c=x;
		}
	}
	if(a+b<=c){
		cout<<"Oh! No!\n";
	}
	else if(a*a+b*b<c*c){
		cout<<"Obtuse\n";
	}
	else if(a*a+b*b==c*c){
		cout<<"Right\n";
	}
	else{
		cout<<"Acute\n";
	}
	return 0;
}
