#include <iostream>
#include <vector>

using std::cout;
using std::cin;

#define mod ((int)1e9+7);

int main()
{
	int res = 1;
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		res = 2 * res;
		res %= mod;
	}
	cout << res;
	return 0;
}