#include<iostream>
using namespace std;

int day[100005];

int main(){
    int n, wait = 0;
    cin >> n;
    for ( int i = 0; i < n; i++ ){
        cin >> day[i];
        if ( day[wait] > day[i] ){
            wait = i;
        }
    }
    cout << wait << '\n';
    return 0;   
}
