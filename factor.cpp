#include "bits/stdc++.h"
#include <iostream>
using namespace std;
int factor(int n)
{
    int c = 0;
    int b[n];
    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % (i) == 0)
        {
            c++;
            b[i] = i;
        }
        else
        {
            b[i] = 0;
        }
    }
    cout << c << endl;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] > 0)
        {
            cout << b[i] << " ";
        }
    }
}
main()
{
    int n;
    cin >> n;
    factor(n);
    return 0;
}