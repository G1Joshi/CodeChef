#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        cout << max(7 * x, d * y + (7 - d) * z) << "\n";
    }
    return 0;
}