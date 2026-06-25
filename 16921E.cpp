#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum == s)
            cout << 0 << endl;
        else if (sum < s)
            cout << -1 << endl;
        else
        {
            int ans = n;
            sum = arr[0];
            int left = 0, right = 0;
            while (right < n && left < n)
            {
                if (sum <= s && right < n - 1)
                {
                    right++;
                    sum += arr[right];
                }
                else
                {
                    sum -= arr[left];
                    left++;
                }
                if (sum == s)
                {
                    // cout << left << " " << right << " " << n - 1 - right + left << endl;
                    ans = min(ans, n - 1 - right + left);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}