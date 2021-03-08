#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 0 || n < k)
            cout << n;
        else if (n % k == 0)
            cout << 0;
        else
            cout << n - (n / k) * k;
        cout << "\n";
    }
    return 0;
}