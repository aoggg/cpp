#include<iostream>
using namespace std;

int main(){
    int a, b, h, time;
    cin >> a >> b >> h;
    for ( time = 0; h > 0; time++){
        h -= a;
        if ( h <= 0 ){
            time++;
            break;
        }
        else{
            h += b; 
        }
    }
    cout << time << '\n';
    return 0;
}
