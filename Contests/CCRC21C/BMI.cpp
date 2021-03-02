#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, h;
        cin >> m >> h;
        float bmi = (float)m / (h * h);
        if (bmi <= 18)
            cout << 1;
        else if (bmi >= 19 && bmi <= 24)
            cout << 2;
        else if (bmi >= 25 && bmi <= 29)
            cout << 3;
        else
            cout << 4;
        cout << "\n";
    }
    return 0;
}