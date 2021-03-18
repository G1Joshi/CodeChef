#include <iostream>
using namespace std;

int main()
{
    int n, h, x, m = -1;
    cin >> n >> h >> x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m = max(m, a);
    }
    if (m + x >= h)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}