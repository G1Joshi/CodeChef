#include <iostream>
using namespace std;

int main()
{
    int r, o, c;
    cin >> r >> o >> c;
    if ((20 - o) * 6 * 6 + c > r)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}