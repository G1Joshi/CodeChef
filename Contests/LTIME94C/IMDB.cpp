#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int movie(vector<pair<int, int>> &v, int n, int x)
{
    for (auto &a : v)
    {
        if (a.second <= x)
            return a.first;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i].second >> v[i].first;
        sort(v.rbegin(), v.rend());
        cout << movie(v, n, x) << "\n";
    }
    return 0;
}