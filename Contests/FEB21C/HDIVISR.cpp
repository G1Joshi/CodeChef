#include <iostream>
using namespace std;

int divisor(int n)
{
    for (int i = 10; i > 0; i--)
        if (n % i == 0)
            return i;
    return -1;
}

int main()
{
    int n;
    cin >> n;
    cout << divisor(n);
    return 0;
}