#include<bits/stdc++.h>
using namespace std;

bool determinant(double a, double b, double c, double d){
	double e=abs(a*d-b*c);
	if(e<0.0000001){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	double i, j, k, l;
	cin>>i>>j>>k>>l;
	determinant(i, j, k, l);
	if(determinant(i, j, k, l)){
		cout<<"0\n";
	}
	else{
		cout<<"1\n";
	}
	return 0;
}
