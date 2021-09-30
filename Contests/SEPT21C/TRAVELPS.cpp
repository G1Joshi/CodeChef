#include <iostream>
using namespace std;

int travel(string s, int n, int a, int b)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            c += a;
        else if (s[i] == '1')
            c += b;
    }
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        cout << travel(s, n, a, b);
        cout << "\n";
    }
    return 0;
}