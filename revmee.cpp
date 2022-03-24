#include "bits/stdc++.h"
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b[a];
    for (int i = 1; i <= a; i++)
    {
        cin >> b[i];
    }
    for (int i = a; i > 0; i--)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}