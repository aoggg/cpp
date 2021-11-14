#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int place = 1;
    while ( place < n ){
        cout << place << '\n';
        place += 2;
    }
    return 0;
}

