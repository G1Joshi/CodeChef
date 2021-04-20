#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;
        double val = 100.00 / (k1 * k2 * k3 * v);
        val = floor(val * 100 + 0.5) / 100;
        if (val < 9.58)
            cout
                << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}