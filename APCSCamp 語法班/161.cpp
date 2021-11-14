#include<bits/stdc++.h>
using namespace std;

int main(){
	double phy, che, bio;
	cin>>phy>>che>>bio;
	double avg=(phy+che+bio)/3;
	if(avg>=90){
		cout<<"A+\n";
	}
	else if(avg>=85&&avg<90){
		cout<<"A\n";
	}
	else if(avg>=80&&avg<85){
		cout<<"A-\n";
	}
	else if(avg>=77&&avg<80){
		cout<<"B+\n";
	}
	else if(avg>=73&&avg<77){
		cout<<"B\n";
	}
	else if(avg>=70&&avg<73){
		cout<<"B-\n";
	}
	else{
		cout<<"F\n";
	}
	return 0;
}
