#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long l, odd, even, i;
	string X;
	cin>>X;
	l=X.size();
	odd=0;
	even=0;
	for(i=l-1; i>=0; i-=2){
		odd+=X[i]-'1'+1;
	}
	for(i=l-2; i>=0; i-=2){
		even+=X[i]-'1'+1;
	}
	cout<<abs(odd-even)<<"\n";
	return 0;
}
