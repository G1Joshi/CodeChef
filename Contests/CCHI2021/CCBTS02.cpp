#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, e = 0, s = 0;
        cin >> n;
        while (n--)
        {
            string c;
            cin >> c;
            if (c == "start")
            {
                s = 1;
            }
            else if (c == "restart")
            {
                if (s == 1)
                    continue;
                s = 1;
            }
            else if (c == "stop")
            {
                if (s)
                    s = 0;
                else
                    e = 1;
            }
        }
        if (e)
            cout << 404;
        else
            cout << 200;
        cout << "\n";
    }
    return 0;
}