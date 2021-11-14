#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long l=s.size(), i;
	bool is_palindrome=true;
	for(i=0; i<=(l-1)/2; i++){
		if(s[i]!=s[l-i-1]){
			is_palindrome=false;
			break;
		}
	}
	cout<<(is_palindrome? "Yes": "No")<<"\n";
	
	return 0;
} 
