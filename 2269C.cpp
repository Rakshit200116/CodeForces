#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long ans = 0;

        while ((int)v.size() >= k)
        {
            int size = v.size();

            int left = k - 1;
            int right = size - k;

            if (v[left] >= v[right])
            {
                ans += v[left];
                v.erase(v.begin() + left);
            }
            else
            {
                ans += v[right];
                v.erase(v.begin() + right);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}