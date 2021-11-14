#include<iostream>
using namespace std;

int  main(){
	long long x, y, ux, uy, a1, b1, c1, a2, b2, c2, a3, b3, c3, max, money;
	cin>>ux>>uy;
	cin>>a1>>b1>>c1;
	cin>>a2>>b2>>c2;
	cin>>a3>>b3>>c3;
	max=0;
	for(x=0; x<=1000; x++){
		for(y=0; y<=1000; y++){
			if(a1*x+b1*y<=c1&&a2*x+b2*y<=c2&&a3*x+b3*y<=c3){
				money=x*ux+y*uy;
				if(money>=max){
					max=money;
				}
			}
		}
	}
	cout<<max<<"\n";
	return 0;
}
