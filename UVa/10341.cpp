// Problem: 10341 - Solve It
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1282
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

const double EPS = 1e-10;
double p, q, r, s, t, u;

double val (double x){
    return p * exp (-x) + q * sin (x) + r * cos (x) + s * tan (x) + t * x * x + u;
}

int main(){
    while (cin >> p >> q >> r >> s >> t >> u){
        double l = 0, r = 1, ans = -1, times = 100, m;
        while (times--){
            m = (r + l) / 2;
            double solve = val (m);
            // if (abs (solve) <= EPS){
                // ans = m;
                // break;
            // }
            if (solve > 0){
                l = m;
            }
            else {
                r = m;
            }
        }
        if (abs (val (m)) > EPS){
            cout << "No solution\n";
        }
        else {
            cout << fixed << setprecision (4) << m << '\n';
        }
    }
    return 0;
}