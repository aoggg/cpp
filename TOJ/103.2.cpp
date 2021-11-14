#include<iostream>
using namespace std;

string like_tea, get_tea, like_sweet, get_sweet;

int main(){
	cin >> like_tea >> like_sweet >> get_tea >> get_sweet;
	if ( like_tea == get_tea && like_sweet == get_sweet ){
		cout << "GOOD\n";
	}
	else if ( like_tea == get_tea || like_sweet == get_sweet ){
		cout << "=~=\n";
	}
	else{
		cout << "OTZ\n";
	}
	return 0;
}
