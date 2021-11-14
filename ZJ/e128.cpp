#include <bits/stdc++.h>
using namespace std; 
 
int main() { 
	int n;
	while(cin>>n&&n){ //代戈块
		int pos=sqrt(n); // ê(pos*pos)程Чキよ计
		int l=n-pos*pos; //
		if(pos%2==0){    //耞琌计临琌案计キよ计
			if(l==0) cout<<pos<<" 1\n"; //Чキよ计
			else if(l>pos) cout<<(pos+1)-(l-pos-1)<<" "<<pos+1<<"\n"; //び璶锣舠 
			else cout<<pos+1<<" "<<l<<"\n"; //ぃノ锣舠
		}
		else{
			if(l==0) cout<<"1 "<<pos<<"\n"; //Чキよ计
			else if(l>pos) cout<<pos+1<<" "<<(pos+1)-(l-pos-1)<<"\n"; //び璶锣舠 
			else cout<<l<<" "<<pos+1<<"\n"; //ぃノ锣舠
		}
	}
