#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int ary[1048576];

int main()
{
	int n;
	srand ( time(0) );
	while (cin >> n)
	{	//ary[0]=0; 
		for ( int i = 0; i < n; i++ )
		{
			ary[i] = rand();
		}
		// vvvv 把你的排序放在這裡 vvvv
		for ( int i = 1; i < n; i++ ){
			for ( int j = 0; j < n - i; j++ ){
				if ( ary[j] > ary[j + 1] ){
					swap ( ary[j], ary[j + 1] );
				}
			}
		}
		// ^^^^ 把你的排序放在這裡 ^^^^
		for ( int i = 0; i < n; i++ )
		{
			cout << ary[i] << "\n";
		}
	}
	return 0;
}
