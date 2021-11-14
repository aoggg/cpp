#include<iostream>
using namespace std;

inline bool is_upper(char c){
	return c<='Z';
}

int main(){
	string s;
	int k,first;
	cin>>k>>s;
	first=0;
	//wrong==0 ex:k=2, aa
	//wrong==1 ex:k=2, aaa
	//wrong==2 ex:k=2, a
	for(int i=0, wrong1=0, ans=0, wrong2=1; i<s.size()&&i+k<=s.size(); i++){
		for(int j=i; j<i+k; j++){
			if(j==i&&wrong2!=1){
				if(is_upper(s[j])==is_upper(s[j-1])){
					wrong1=1;
					break;
				}
			}
			else if(j!=i){
				if(is_upper(s[j])!=is_upper(s[j-1])){
					wrong1=2;
					break;
				}
			}
		}
		if(wrong1==0){
			ans+=k;
			i+=k-1;
			wrong2=wrong1;
			if(first<=ans){
				first=ans;
			}
		}
		else if(wrong1==1){
			if(first<=ans){
				first=ans;
			}
			if(i>=k&&wrong2==0){
				i-=k;
			}
			wrong2=wrong1;
			wrong1=0;
			ans=0;
		}
		else{
			if(first<=ans){
				first=ans;
			}
			wrong2=wrong1;
			wrong1=0;
			ans=0;
		}
	}
	cout<<first<<"\n";
	return 0;
} 
