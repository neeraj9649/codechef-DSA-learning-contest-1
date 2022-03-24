#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ce = 0, co = 0;
    for (int i = 1; i <= (2 * n); i++)
    {
        if (i % 2 == 0)
        {
            ce += i;
        }
        else
        {
            co += i;
        }
    }
    cout << co << " " << ce << endl;
    return 0;
}