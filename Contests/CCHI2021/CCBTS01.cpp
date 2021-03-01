#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p = 0, c = 0, m = 0;
        string pcm;
        cin >> pcm;
        for (int i = 0; pcm[i]; i++)
        {
            if (pcm[i] == 'P')
                p++;
            else if (pcm[i] == 'C')
                c++;
            else if (pcm[i] == 'M')
                m++;
        }
        if (p == 1 && c == 1 && m == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}