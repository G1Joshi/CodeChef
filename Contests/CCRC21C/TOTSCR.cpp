#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int a[k];
        for (long long int i = 0; i < k; i++)
            cin >> a[i];
        for (long long int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            long long int p = 0;
            for (long long int j = 0; j < k; j++)
                if (s[j] == '1')
                    p += a[j];
            cout << p << "\n";
        }
    }
    return 0;
}