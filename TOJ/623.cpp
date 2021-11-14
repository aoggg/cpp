#include<bits/stdc++.h>
using namespace std;

int main(){
	long long T, Q, i, L, R, t, q;
	string S;
	cin>>T;
	for(t=1; t<=T; t++){
		cin>>S;
		cin>>Q;
		for(q=1; q<=Q; q++){
			cin>>L>>R;
			for(i=L-1; i<=R-1; i++){
				cout<<S[i];
			}
		}
		cout<<"\n";
	}
	return 0;
}
