#include <bits/stdc++.h>
using namespace std; 
 
int main() { 
	int n;
	while(cin>>n&&n){ //�h�����J
		int pos=sqrt(n); // ��(pos*pos)���̪񪺧��������
		int l=n-pos*pos; //�h�X������
		if(pos%2==0){    //�P�_�O�_���٬O���ƪ������
			if(l==0) cout<<pos<<" 1\n"; //���������
			else if(l>pos) cout<<(pos+1)-(l-pos-1)<<" "<<pos+1<<"\n"; //�Ӫ��n���s 
			else cout<<pos+1<<" "<<l<<"\n"; //�������s
		}
		else{
			if(l==0) cout<<"1 "<<pos<<"\n"; //���������
			else if(l>pos) cout<<pos+1<<" "<<(pos+1)-(l-pos-1)<<"\n"; //�Ӫ��n���s 
			else cout<<l<<" "<<pos+1<<"\n"; //�������s
		}
	}
