#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int ary[1048576];

int main()
{
	int n;
	srand( time(0) );
	while ( cin >> n )
	{
		for ( int i=0; i<n; i++ )
		{
			ary[i] = rand();
		}
		// vvvv 把你的排序放在這裡 vvvv
		int smallest; 
		for ( int i = 0; i < n; i++ ){
			smallest = i;
			for ( int j = i; j < n; j++ ){
				if ( ary[j] < ary[smallest] ){
					smallest = j;
				}
			}
			swap ( ary[smallest], ary[i] );
		}
		// ^^^^ 把你的排序放在這裡 ^^^^
		for ( int i=0; i<n; i++ )
		{
			cout << ary[i] << "\n";
		}
	}
	return 0;
}
