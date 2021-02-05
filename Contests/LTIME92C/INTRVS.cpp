#include <iostream>
#include <cmath>
using namespace std;

string interview(int *a, int n, int k)
{
    int attempt = 0;
    bool slow = 0, bot = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
            attempt++;
        if (a[i] > k)
            slow = 1;
        if (a[i] > 1 || a[i] == -1)
            bot = 0;
    }
    if (attempt < ceil(n / 2.0))
        return "Rejected";
    if (slow)
        return "Too Slow";
    if (bot)
        return "Bot";
    return "Accepted";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << interview(a, n, k) << endl;
    }
    return 0;
}