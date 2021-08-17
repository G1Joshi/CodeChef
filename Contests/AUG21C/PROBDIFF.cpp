#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d && d == a)
            cout << 0;
        else if (a != b && b != c && c != d && d != a)
            cout << 2;
        else if ((a == b && a != c && a != d) || (b == c && b != d && b != a) || (c == d && c != a && c != b) || (d == a && d != b && d != c))
            cout << 2;
        else
            cout << 1;
        cout << "\n";
    }
    return 0;
}