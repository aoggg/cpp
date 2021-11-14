#include<iostream>
using namespace std;

int main(){
	long long a1, a2, a3, a4, i;
	string s[5];
	cin>>a1>>a2>>a3>>a4;
	for(i=1; i<=4; i++){
		cin>>s[i];
	}
	cout<<s[a1]<<s[a2]<<s[a3]<<s[a4]<<"\n";
	return 0;
}
