#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string space(vector<int> v, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > i + 1)
            return "Second";
        c += i + 1 - v[i];
    }
    if (c % 2)
        return "First";
    return "Second";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &a : v)
            cin >> a;
        sort(v.begin(), v.end());
        cout << space(v, n) << "\n";
    }
    return 0;
}