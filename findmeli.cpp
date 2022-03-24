#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int n, m, p = 0;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (m == a[i])
			p = 1;
	}
	cout << (p ? "1" : "-1");
	return 0;
}