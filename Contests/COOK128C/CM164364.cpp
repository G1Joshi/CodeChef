#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int d = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                d++;
            else
                x--;
        }
        if (x < 1)
            cout << d;
        else
            cout << d - x;
        cout << "\n";
    }
    return 0;
}