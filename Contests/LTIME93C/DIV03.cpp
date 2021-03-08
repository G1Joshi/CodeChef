#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        int a[10] = {};
        for (i = 0; i < 10; i++)
            cin >> a[i];
        int k;
        cin >> k;
        i--;
        while (k > 0)
        {
            if (a[i])
            {
                if (k <= a[i])
                {
                    a[i] -= k;
                    k = 0;
                }
                else if (k > a[i])
                {
                    k -= a[i];
                    a[i] = 0;
                }
            }
            --i;
        }
        for (i = 9; i >= 0; i--)
        {
            if (a[i])
            {
                cout << i + 1;
                break;
            }
        }
        cout << "\n";
    }
    return 0;
}