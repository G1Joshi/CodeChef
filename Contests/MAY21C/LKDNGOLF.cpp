#include <iostream>
using namespace std;

string golf(int n, int x, int k)
{
    if (x % k == 0 || (n + 1 - x) % k == 0)
        return "YES";
    return "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        cout << golf(n, x, k) << "\n";
    }
    return 0;
}