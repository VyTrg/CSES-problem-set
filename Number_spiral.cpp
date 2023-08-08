#include <iostream>
#include <math.h>

using namespace std;

int Max(int a, int b);

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long r, c;
		cin >> r >> c;
		if(r == c)
		{
			cout << r * r - (r - 1) << endl;
		}
		else
		{
			long long diag = Max(r, c);
			diag = diag * diag - (diag - 1);
			if(r > c)
			{
				if(r % 2 == 0)
				{
					cout << diag + (r - c) << endl;
				}
				else
				{
					cout << diag - (r - c)<< endl;
				}
			}
			else if(r < c)
			{
				if(c % 2 == 0)
				{
					cout << diag - (c - r) << endl;
				}
				else
				{
					cout << diag + (c - r)<< endl;
				}
			}
		}
	}
	return 0;
}

int Max(int a, int b)
{
	if(a > b) return a;
	return b;
}