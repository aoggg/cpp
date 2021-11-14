#include<bits/stdc++.h>
using namespace std;

string season(int month){
	if(month>=3&&month<=5){
		return "Spring!\n";
	}
	if(month>=6&&month<=8){
		return "Summer!\n";
	}
	if(month>=9&&month<=11){
		return "Autumn!\n";
	}
	if(month==12||month==1||month==2){
		return "Winter!\n";
	}
}

int main(){
	int a;
	cin>>a;
	season (a);
	cout<<season(a);
	return 0;
}
