#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        while (n--)
        {
            int a;
            cin >> a;
            s += a;
        }
        if (s % 2)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}