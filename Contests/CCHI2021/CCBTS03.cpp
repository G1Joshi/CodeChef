#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int ans = INT_MAX;
        for (int i = 0, j = k - 1; j < n; i++, j++)
        {
            ans = min(ans, arr[j] - arr[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}