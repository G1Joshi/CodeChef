#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (long long int i = 0; i < n; i++)
            cin >> arr[i];
        long long int mx = INT_MIN;
        sort(arr, arr + n);
        long long int x = arr[0];
        long long int y = arr[1];
        long long int z = arr[n - 1];
        mx = max(mx, abs(x - y) + abs(y - z) + abs(z - x));
        cout << mx << "\n";
    }
    return 0;
}