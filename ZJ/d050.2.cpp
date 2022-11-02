#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,time;
    cin >> h;
    time=h-15;
    if (time<0)
    {
        time+=24;
        cout << time << "\n";
    }
    else
    {
        cout << time << "\n";
    }
    return 0;
}
