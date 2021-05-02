#include <iostream>
using namespace std;

string lapindrome(string s, int *a, int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        a[s[i] - 'a']++;
        a[s[j] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
        if (a[i])
            return "NO";
    return "YES";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int a[26] = {0};
        cout << lapindrome(s, a, n) << "\n";
    }
    return 0;
}