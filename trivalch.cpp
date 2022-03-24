#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int m, n, p;
	cin >> m >> n >> p;
	if ((m + n) > p && (n + p) > m && (m + p) > n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}