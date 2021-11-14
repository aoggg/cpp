#include <iostream>
#include<cmath>
using namespace std;
int main(){
	double a,b, c, d, ans;
	cin>>a>>b>>c>>d;
	ans=fabs(a*d-c*b);
	if(ans<0.0000001){
		cout<<0<<"\n";
	}else{
		cout<<1<<"\n";
	}
	
}

