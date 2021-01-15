#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int> a, int n, int s, vector<int> b, int m, int t)
{
    if (s > t)
        return 0;
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    int c = 0;
    while (s <= t && a.size() && b.size())
    {
        s += b[0];
        s -= a[0];
        t += a[0];
        t -= b[0];
        a.erase(a.begin());
        b.erase(b.begin());
        c++;
    }
    if (s <= t)
        return -1;
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        int s = 0, t = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            t += b[i];
        }
        cout << solve(a, n, s, b, m, t) << endl;
    }
    return 0;
}