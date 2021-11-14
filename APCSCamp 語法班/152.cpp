#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double F;
	cin>>F;
	cout<<fixed<<setprecision(2)<<(5*(F-32))/9<<"\n";
	return 0;
}
