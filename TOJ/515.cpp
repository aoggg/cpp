#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if ( n / 1000 == n % 1000 / 100 && n / 1000 == n / 10 % 10 && n / 1000 == n % 10 ){
        cout << "GREAT!!\n";
    }
    else{
        cout << "OAQ\n";
    }
    return 0;
}
