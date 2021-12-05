#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r[3] = {};
        for (int i = 0; i < 5; i++)
        {
            int a;
            cin >> a;
            r[a]++;
        }
        if (r[1] > r[2])
            cout << "INDIA\n";
        else if (r[1] < r[2])
            cout << "ENGLAND\n";
        else
            cout << "DRAW\n";
    }
    return 0;
}