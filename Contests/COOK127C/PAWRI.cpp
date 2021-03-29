#include <iostream>
using namespace std;

string pawri(string s)
{
    int n = s.length();
    if (n < 5)
        return s;
    for (int i = 0; i <= n - 5; i++)
    {
        if (s[i] == 'p' && s[i + 1] == 'a' && s[i + 2] == 'r' && s[i + 3] == 't' && s[i + 4] == 'y')
        {
            s[i + 2] = 'w';
            s[i + 3] = 'r';
            s[i + 4] = 'i';
        }
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << pawri(s) << "\n";
    }
    return 0;
}