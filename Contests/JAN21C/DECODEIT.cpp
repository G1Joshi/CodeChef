#include <bits/stdc++.h>
using namespace std;

int b2d(string t)
{
    int n = stoi(t);
    int dec = 0;
    int base = 1;
    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        dec += r * base;
        base = base * 2;
    }
    return dec;
}

char encode(string t)
{
    return (97 + b2d(t));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 0;
        cin >> n;
        string s;
        cin >> s;
        while (s[i])
        {
            string t = "";
            int j = 4;
            while (j--)
            {
                t += s[i++];
            }
            cout << encode(t);
        }
        cout << "\n";
    }
    return 0;
}