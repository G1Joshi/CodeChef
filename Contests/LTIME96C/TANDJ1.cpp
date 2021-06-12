#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int e = abs(c - a) + abs(d - b);
        if (k >= e && ((k % 2 == 0 && e % 2 == 0) || (k % 2 != 0 && e % 2 != 0)))
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}