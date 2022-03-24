#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= m - i; j++)
        {
            cout << " ";
        }
        for (int j = m - i; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}