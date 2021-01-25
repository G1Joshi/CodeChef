#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int n = r - l;
        cout << n * 2 + 1 << "\n";
    }
    return 0;
}