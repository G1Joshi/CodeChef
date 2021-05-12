#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int am, bm, cm, tm, a, b, c;
        cin >> am >> bm >> cm >> tm >> a >> b >> c;
        if (a >= am && b >= bm && c >= cm && (a + b + c) >= tm)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}