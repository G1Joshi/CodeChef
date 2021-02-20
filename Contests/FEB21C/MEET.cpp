#include <iostream>
#include <vector>
using namespace std;

void convert(float &hh, string ap)
{
    if (ap == "AM" && hh == 12)
        hh = 0;
    else if (ap == "PM" && hh != 12)
        hh += 12;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float HH, MM;
        string AP;
        scanf("%f:%f", &HH, &MM);
        cin >> AP;
        convert(HH, AP);
        HH += MM / 100.00;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            float Hh, Mm;
            string Ap;
            scanf("%f:%f", &Hh, &Mm);
            cin >> Ap;
            convert(Hh, Ap);
            Hh += Mm / 100.00;
            float hH, mM;
            string aP;
            scanf("%f:%f", &hH, &mM);
            cin >> aP;
            convert(hH, aP);
            hH += mM / 100.00;
            if (Hh <= HH && HH <= hH)
                cout << 1;
            else
                cout << 0;
        }
        cout << "\n";
    }
    return 0;
}