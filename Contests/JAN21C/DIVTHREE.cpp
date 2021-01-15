#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        int a[n], sum = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        c = sum / k;
        if (c > d)
            cout << d << endl;
        else
            cout << c << endl;
    }
    return 0;
}