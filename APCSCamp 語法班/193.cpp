#include<iostream>
using namespace std;

int main(){
	char c;
	cin>>c;
	long long time, i;
	long long num=(int)c;
	if(num>=65){
	num=num-65+10;
	} 
	else{
		num=num-48+0;
	}
	cout<<num<<"\n";
	return 0;
}
