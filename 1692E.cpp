#include <iostream>
#include <vector>
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
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum < s)
            cout << -1 << endl;
        else if (sum == s)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = __INT_MAX__;
            int prefix[n];
            int pre = 0;
            for (int i = 0; i < n; i++)
            {
                pre += arr[i];
                prefix[i] = pre;
                cout << pre << " ";
            }
            int left = -1, right = -1;
            int sub_sum = 0;
            while (right < n)
            {
                sub_sum = prefix[right] - prefix[left];
                if (sub_sum == s)
                {
                    ans = min(ans, n - (right - left + 1));
                    right++;
                }
                else if (sub_sum > s)
                {
                    left++;
                }
                else
                    right++;
            }
            cout << endl;
        }
        return 0;
    }
}