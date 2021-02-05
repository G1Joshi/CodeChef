#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, o = 0, e = 0;
        cin >> n;
        while (n--)
        {
            int a;
            cin >> a;
            if (a % 2)
                o++;
            else
                e++;
        }
        cout << min(o, e) << endl;
    }
    return 0;
}