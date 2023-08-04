#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int nums;
	std::vector<int> v(n + 1);
	for(int i = 1; i < n; ++i)
	{
		cin >> nums;
		v[nums] = 1;
	}
	for(int i = 1; i <= n; ++i)
	{
		if(v[i] != 1)
		{
			cout << i << "\t";
			break;
		}
	}
	return 0;
}
