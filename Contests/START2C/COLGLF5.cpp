#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int f[n];
        for (int i = 0; i < n; i++)
            cin >> f[i];
        int c[m];
        for (int j = 0; j < m; j++)
            cin >> c[j];
        int s = 0;
        int i = 0, j = 0;
        bool flag = 1;
        while (i < n && j < m)
        {
            if (flag)
            {
                if (c[j] < f[i])
                {
                    s++;
                    j++;
                    flag = 0;
                }
                else
                    i++;
            }
            if (!flag)
            {
                if (f[i] < c[j])
                {
                    s++;
                    i++;
                    flag = 1;
                }
                else
                    j++;
            }
        }
        if (flag && j < m)
            s++;
        if (!flag && i < n)
            s++;
        cout << s << "\n";
    }
    return 0;
}