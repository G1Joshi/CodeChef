#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int g = 0;
        bool f = false;
        for (int i = 0; i < n.length(); i++)
        {
            if (!f && n[i] == '1')
            {
                f = true;
                g++;
            }
            else if (n[i] == '0')
                f = false;
        }
        cout << g << "\n";
    }
    return 0;
}