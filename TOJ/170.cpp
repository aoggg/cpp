#include<bits/stdc++.h>
using namespace std;

void B(int s){
	int e, f, g, h;
	for(e=1; e<=s; e++){
		for(f=s-e; f>=1; f--){
			cout<<" ";
		}
		for(g=1; g<=2*(e-1)+1; g++){
			cout<<"*";
		}
		cout<<"\n";
	}
}

void A(char a, int b){
	int i, l, j, k;
	if(a=='A'){
		B(b);
		cout<<"\n";
		return;
	}
	if(a=='B'){
		for(i=1; i<=2; i++){
			B(b);
		}
		cout<<"\n";
		return;
	}
	if(a=='C'){
		for(l=1; l<=b; l++){
			for(i=1; i<=l; i++){
				for(j=b-i; j>=1; j--){
					cout<<" ";
				}
				for(k=1; k<=2*(i-1)+1; k++){
					cout<<"*";
				}
				cout<<"\n";
			}
		}
		cout<<"\n";
		return;
	}
	if(a=='D'){
		B(10*b);
		cout<<"\n";
		return;
	}
	if(a=='E'){
		for(i=1; i<=b; i++){
			for(j=2+b-i; j>=1; j--){
				cout<<" ";
			}
			for(k=1; k<=2*(i-1)+1; k++){
				cout<<"*";
			}
			cout<<"\n";
		}
		for(i=1; i<=2*(b-1)+5; i++){
			cout<<"#";
		}
		cout<<"\n\n";
		return;
	}
	if(a=='F'){
		B(2*b);
		cout<<"\n";
		return;
	}
	if(a=='G'){
		B(3*b);
		cout<<"\n";
		return;
	}
	if(a=='H'){
		B(7*b);
		cout<<"\n";
		return;
	}
	if(a=='I'){
		B(4*b-1);
		cout<<"\n";
		return;
	}
}

int main(){
	int T, t, n;
	char c;
	cin>>T;
	for(t=1; t<=T; t++){
		cin>>c>>n;
		A(c, n);
	}
	return 0;
}
