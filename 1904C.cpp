#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

bool find(vector<long long> &v, long long n)
{
    int low = 0, high = v.size() - 1;
    while (low <= high)
    {
        int middle = low + (high - low) / 2;
        long long element = v[middle];
        if (element == n)
            return true;
        else if (element > n)
            high = middle - 1;
        else
            low = middle + 1;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> arr;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        if (k >= 3)
            cout << 0 << endl;
        else if (k == 1)
        {
            long long ans = arr[0];
            for (int i = 0; i < n - 1; i++)
            {
                // cout << arr[i] << " " << arr[i + 1] << endl;
                ans = min(ans, abs(arr[i] - arr[i + 1]));
            }
            cout << ans << endl;
        }
        else // k == 2
        {
            long long ans = arr[0];

            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    long long d = arr[j] - arr[i];

                    ans = min(ans, d);

                    auto it = lower_bound(arr.begin(), arr.end(), d);

                    if (it != arr.end())
                        ans = min(ans, abs(*it - d));

                    if (it != arr.begin())
                    {
                        --it;
                        ans = min(ans, abs(*it - d));
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
