#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int ary[1048576];

void qsort ( int a, int b ){
	if ( a >= b ){
		return;
	}
	int j = a;
	for ( int i = a + 1; i <= b; i++ ){
		if ( ary[i] < ary[a] ){
			j++;
			swap ( ary[i], ary[j] );
		}
	}
	swap ( ary[a], ary[j] );
	qsort ( a, j - 1 );
	qsort ( j + 1, b );
} 

int main()
{
	int n, i;
	srand(time(0));
	while (cin >> n)
	{
		for (i=0; i<n; i++)
		{
			ary[i] = rand();
		}
		// vvvv 把你的排序放在這裡 vvvv
		qsort ( 0, n - 1 );
		// ^^^^ 把你的排序放在這裡 ^^^^
		for (i=0; i<n; i++)
		{
			cout << ary[i] << "\n";
		}
	}
	return 0;
}
