#include<bits/stdc++.h>
using namespace std;

int main(){
	long long whe, mind, cube;
	cin>>whe>>mind>>cube;
	if(whe==0){
		if(mind==0){
			cout<<"茎瑅┰难\n";
		}
		else{
			if(cube==1||cube==2){
				cout<<"蔓┰难\n";
			}
			else if(cube==3||cube==4){
				cout<<"┰难\n";
			}
			else{
				cout<<"痷糃┰难\n";
			}
		}
	}
	else{
		if(mind==0){
			cout<<"┰难\n";
		}
		else{
			if(cube==1||cube==2){
				cout<<"伐┰难\n";
			}
			else if(cube==3||cube==4){
				cout<<"秤┰难\n";
			}
			else{
				cout<<"碢┰难\n";
			}
		}
	}
	return 0;
}
