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
	{
		for ( int i = 0; i < n; i++ )
		{
			ary[i] = rand();
		}
		// vvvv ��A���Ƨǩ�b�o�� vvvv
		for ( int i = 1; i < n; i++ ){
			for ( int j = i; j > 0 && ary[j] < ary[j - 1]; j-- ){
				swap ( ary[j], ary[j - 1] );
			}
		}
		// ^^^^ ��A���Ƨǩ�b�o�� ^^^^
		for ( int i = 0; i < n; i++ )
		{
			cout << ary[i] << "\n";
		}
	}
	return 0;
}
