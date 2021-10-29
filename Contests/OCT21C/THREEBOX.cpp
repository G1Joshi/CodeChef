#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3], d;
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        cin >> d;
        if (arr[0] + arr[1] + arr[2] <= d)
            cout << "1\n";
        else
        {
            sort(arr, arr + 3);
            if (arr[0] + arr[1] <= d)
                cout << "2\n";
            else
                cout << "3\n";
        }
    }
    return 0;
}