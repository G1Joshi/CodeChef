#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0;
        cin >> n;
        while (n--)
        {
            int s, p, v;
            cin >> s >> p >> v;
            m = max(m, ((p / (s + 1)) * v));
        }
        cout << m << "\n";
    }
    return 0;
}