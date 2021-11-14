#include<iostream>
using namespace std;

int main(){
	string s;
	long long L;
	getline(cin, s);
	L=s.size();
	for(long long i=0; i<L; i++){
		long long num=s[i];
		if(i==0||s[i-2]=='.'){
			if(num>='a'&&num<='z'){
				num=num-'a'+'A';
			}
		}
		else{
			if(num>='A'&&num<='Z'){
				num=num-'A'+'a';
			}
		}
		cout<<(char)num;
		if(i==L){
			cout<<"\n";
		}
	}
	return 0;
} 
