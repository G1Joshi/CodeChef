#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        if (a)
            x += a * k;
        if (b)
            y += b * k;
        if (x > y)
            cout << "DIESEL\n";
        else if (y > x)
            cout << "PETROL\n";
        else
            cout << "SAME PRICE\n";
    }
    return 0;
}