#include <iostream>
#include <algorithm>
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
        int ans = 0;
        int segment = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(arr[i + 1] - arr[i]) <= k)
            {
                segment++;
            }
            else
            {
                ans = max(ans, segment);
                segment = 0;
            }
        }
        ans = max(ans, segment);
        ans++;

        cout << n - ans << endl;
    }
    return 0;
}