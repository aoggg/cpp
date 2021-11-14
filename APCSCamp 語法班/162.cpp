#include<bits/stdc++.h>
using namespace std;

int main(){
	double phy, che, bio, avg;
	cin>>phy>>che>>bio;
	avg=(phy+che+bio)/3;
	if(phy>=90||che>=90||bio>=90){
		if(avg>=60){
			if(phy>=40&&che>=40&&bio>=40){
				cout<<"Y\n";
			}
			else{
				cout<<"N\n";
			}
		}
		else{
			cout<<"N\n";
		}
	}
	else{
		cout<<"N\n";
	}
	return 0;
} 
