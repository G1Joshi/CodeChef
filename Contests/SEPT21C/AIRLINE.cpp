#include <iostream>
using namespace std;

string carry(int a, int b, int c, int d, int e)
{
    if (a + b + c > d + e)
        return "NO";
    if (a + b <= d && c <= e)
        return "YES";
    if (b + c <= d && a <= e)
        return "YES";
    if (c + a <= d && b <= e)
        return "YES";
    return "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        cout << carry(a, b, c, d, e);
        cout << "\n";
    }
    return 0;
}