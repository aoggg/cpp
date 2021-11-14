#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x1, y1, wide1, high1, x2, y2, wide2, high2;
	cin>>x1>>y1>>wide1>>high1;
	cin>>x2>>y2>>wide2>>high2;
	if(x2<=x1){
		if(y2<=y1){
			if(x2+wide2<=x1){
				cout<<"No\n";
			}
			else if(y2+high2<=y1){
				cout<<"No\n"; 
			}
			else{
				cout<<"Yes\n";
			}
		}
		else{
			if(x2+wide2<=x1){
				cout<<"No\n";
			}
			else if(y1+high1<=y2){
				cout<<"No\n";
			}
			else{
				cout<<"Yes\n"; 
			}
		}
	}
	else{//x2>x1
		if(y2<=y1){
			if(x1+wide1<=x2){
				cout<<"No\n";
			}
			else if(y2+high2<=y1){
				cout<<"No\n";
			}
			else{
				cout<<"Yes\n";
			}
		}
		else{
			if(x1+wide1<=x2){
				cout<<"No\n";
			}
			else if(y1+high1<=y2){
				cout<<"No\n";
			}
			else{
				cout<<"Yes\n";
			}
		}
	}
	return 0;
}
