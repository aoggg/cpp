#include<bits/stdc++.h>
using namespace std;

bool check(int a, int b){
	if(a==1){
		if(b>=8){
			return true;
		}
		else{
			return false;
		}
	}
	if(a==2){
		if(b>=9){
			return true;
		}
		else{
			return false;
		}
	}
	if(a==3){
		if(b==10){
			return true;
		}
		else{
			return false;
		}
	}
	
}
int main(){
	int i, j;
	cin>>i>>j;
	check(i, j);
	if(check(i,j)){
		cout<<"PASS!\n";
	}
	else{
		cout<<"FAIL! You see see you!\n";
	}
	return 0;
}
