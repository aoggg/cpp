#include<bits/stdc++.h>
using namespace std;

int main(){
	long long whe, mind, cube;
	cin>>whe>>mind>>cube;
	if(whe==0){
		if(mind==0){
			cout<<"���v����\n";
		}
		else{
			if(cube==1||cube==2){
				cout<<"���G����\n";
			}
			else if(cube==3||cube==4){
				cout<<"������\n";
			}
			else{
				cout<<"�u�C����\n";
			}
		}
	}
	else{
		if(mind==0){
			cout<<"�p�t����\n";
		}
		else{
			if(cube==1||cube==2){
				cout<<"���K����\n";
			}
			else if(cube==3||cube==4){
				cout<<"�Ӥd�N����\n";
			}
			else{
				cout<<"�s�P����\n";
			}
		}
	}
	return 0;
}
