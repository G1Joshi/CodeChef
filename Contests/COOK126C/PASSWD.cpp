#include <iostream>
using namespace std;

bool ispunc(char c)
{
    switch (c)
    {
        {
        case '@':
        case '#':
        case '%':
        case '&':
        case '?':
            return true;
        }
    }
    return false;
}

string password(string pass, int n)
{
    if (n < 10)
        return "NO";
    int a, b, c, d;
    a = b = c = d = 0;
    for (int i = 0; i < n; i++)
        if (islower(pass[i]))
            a++;
    for (int i = 1; i < n - 1; i++)
    {
        if (isupper(pass[i]))
            b++;
        if (isdigit(pass[i]))
            c++;
        if (ispunc(pass[i]))
            d++;
    }
    if (a && b && c && d)
        return "YES";
    return "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pass;
        cin >> pass;
        cout << password(pass, pass.length()) << "\n";
    }
    return 0;
}