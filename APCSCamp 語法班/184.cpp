#include<iostream>
using namespace std;

int main(){
	long long n, layer, space, star;
	cin>>n;
	for(layer=1; layer<=(n+1)/2; layer++){
		for(space=(n+1)/2-layer; space>=1; space--){
			cout<<" ";
		}
		for(star=1; star<=(layer-1)*2+1; star++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(layer=(n-1)/2; layer>=1; layer--){
		for(space=(n+1)/2-layer; space>=1; space--){
			cout<<" ";
		}
		for(star=1; star<=(layer-1)*2+1; star++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
