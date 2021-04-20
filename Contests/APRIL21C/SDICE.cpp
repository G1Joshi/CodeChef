#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n < 4)
            switch (n)
            {
            case 1:
                cout << 20;
                break;
            case 2:
                cout << 36;
                break;
            case 3:
                cout << 51;
                break;
            }
        else
        {
            long long int s = (n / 4) * 44;
            long long int r = n % 4;
            switch (r)
            {
            case 0:
                s += 16;
                break;
            case 1:
                s += 32;
                break;
            case 2:
                s += 44;
                break;
            case 3:
                s += 55;
                break;
            }
            cout << s;
        }
        cout << "\n";
    }
    return 0;
}