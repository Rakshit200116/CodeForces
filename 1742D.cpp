#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int hash[1001] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            hash[arr[i]] = i + 1;
        }
        int ans = -1;
        for (int i = 1; i < 1001; i++)
        {
            for (int j = 1; j < 1001; j++)
            {
                if (hash[i] && hash[j])
                    if (__gcd(i, j) == 1)
                    {
                        ans = max(ans, hash[i] + hash[j]);
                    }
            }
        }
        cout << ans << endl;
    }
    return 0;
}