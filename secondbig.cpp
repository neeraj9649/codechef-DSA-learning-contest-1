#include <iostream>
using namespace std;
main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && a < c)
    {
        cout << min(b, c) << endl;
    }
    else if (c < b && c < a)
    {
        cout << min(b, a) << endl;
    }
    else if (b < a && b < c)
    {
        cout << min(c, a) << endl;
    }
    return 0;
}