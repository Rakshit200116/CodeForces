#include <iostream>
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
        int prefix[n] = {0};
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] < 2 * arr[i + 1])
                count++;
            prefix[i + 1] = count;
        }
        int left = 0, right = k;
        int ans = 0;
        while (right < n)
        {
            int pairs = prefix[right] - prefix[left];
            if (pairs == k)
            {
                ans++;
            }
            left++;
            right++;
        }
        cout << ans << endl;
    }
    return 0;
}