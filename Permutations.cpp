#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >>n;
	if(n == 1)
	{
		cout << 1;
	}
	else if(n <= 3)
	{
		cout << "NO SOLUTION" << endl;
	}
	else if(n == 4)
	{
		cout << "2 4 1 3";
	}
	else
	{
		if(n % 2 != 0)
		{
			for(int i = n - 1; i >= 2; i -= 2)
			{
				cout << i << "\t";
			}
			for(int i = n; i >= 1; i -= 2)
			{
				cout << i << "\t";
			}
		}
		else
		{
			for(int i = n; i >= 2; i -= 2)
			{
				cout << i << "\t";
			}
			for(int i = n - 1; i >= 1; i -= 2)
			{
				cout << i << "\t";
			}
		}
	}
	return 0;
}