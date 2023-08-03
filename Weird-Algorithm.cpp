#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	if(n == 1)
	{
		cout << 1;
	}
	else
	{
		cout << n << "\t";
		while(n != 1)
	{
		if(n % 2 == 0)
		{
			n /= 2;
			cout << n << "\t";
		}
		else
		{
			n = n * 3 + 1;
			cout << n << "\t";
		}
	}
	}
	return 0;
}
