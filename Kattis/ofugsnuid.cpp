#include<iostream>
using namespace std;

int num[100005];

int main(){
    int n;
    cin >> n;
    for ( int i = 1; i <= n; i++ ){
        cin >> num[i];
    }
    for ( int i = n; i >= 1; i-- ){
        cout << num[i] << '\n';
    }
    return 0;   
}
