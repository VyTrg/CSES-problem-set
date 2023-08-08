#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Max(int a, int b);

int main()
{
	int n, k;
	int a[100];
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int length, key;
	length = key = 0;
	for(int i = 0; i < n; ++i)
	{
		for(int j = i + 1; j < n; ++i)
		{
			if(a[j] != a[i])
			{
				length++;
			}
			else
			{
				length = 0;
			}
		}
		key = Max(length, key);
	}
	cout << key;
	return 0;
}

int Max(int a, int b)
{
	if(a > b) return a;
	else return b;
}
