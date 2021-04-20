#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, c = 0, flag = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
                c++;
            else
                c = 0;
            if (c >= k)
                flag = 1;
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}