#include <iostream>
#include <cmath>
using namespace std;

string speed(int u, int v, int a, int s)
{
    double w = sqrt(u * u - 2 * a * s);
    if (w > v)
        return "No";
    return "Yes";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int u, v, a, s;
        cin >> u >> v >> a >> s;
        cout << speed(u, v, a, s) << "\n";
    }
    return 0;
}