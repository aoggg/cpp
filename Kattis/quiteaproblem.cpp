#include<iostream>
using namespace std;

string s, test;

int main(){
	while ( getline ( cin, s ) ){
		bool have_problem = false;
        for ( int i = 0; i < s.size(); i++ ){
    	    if ( s[i] >= 'A' && s[i] <= 'Z' ){
    		    s[i] = s[i] - 'A' + 'a';
    	    }
    	}
        for ( int i = 0; i + 6 < s.size(); i++ ){
    	    test = "";
    	    for ( int j = i; j < i + 7; j++ ){
    		    test += s[j];
        	}
        	if ( test == "problem" ){
        		have_problem = true;
        		break;
        	}
        }
        if ( have_problem ){
      		cout << "yes\n";
        }
        else {
        	cout << "no\n";
        }
	}
    return 0;
}
