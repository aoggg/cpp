#include<iostream>
using namespace std;

int main(){
    int b, d, c, l;
    bool is_impossible = true;
    cin >> b >> d >> c >> l;
    for ( int i = 0 ; i <= l / b; i++ ){
        int last = l;
        last -= i * b;
        for ( int j = 0; j <= last / d; j++ ){
            int last1 = last;
            last1 -= j * d;
            if ( last1 - last1 / c * c == 0 ){
                is_impossible = false;
                cout << i << ' ' << j << ' ' << last1 / c << '\n';
            }
        }
    }
    if ( is_impossible ){
        cout << "impossible\n";
    }
    return 0;   
}
