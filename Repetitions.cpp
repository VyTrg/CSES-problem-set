#include <iostream>
#include <string>

using namespace std;

int Max(int a, int b);

int main()
{
	string s;
	cin >> s;
	int n = size(s);
	int k, h;
	k = h = 1;
	for(int i = 1; i < n; ++i)
	{
		if(s[i] == s[i - 1])
		{
			k++;
		}
		else
		{
			k = 1;
		}
		h = Max(k, h);
	}
	cout << h;
	return 0;
}

int Max(int a, int b)
{
	if(a > b) return a;
	else return b;
}