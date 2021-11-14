#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, a, b, c, d, e, f, x, y;
	cin>>n>>m;
	cin>>a>>b>>c>>d>>e>>f;
	for(y=m; y>=0; y--){
		for(x=0; x<=n; x++){
			if(a*x*x+b*x*y+c*y*y+d*x+e*y>=f){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		} 
		cout<<"\n";
	}
	return 0;
}
