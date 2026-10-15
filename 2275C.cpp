#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        map<int, vector<int>> mp;

        for (int i = 0; i <= n - 5; i++)
        {
            int temp = arr[i] + arr[i + 2] - arr[i + 4];
            mp[temp].push_back(i);
        }

        long long ans = 0;

        for (auto &entry : mp)
        {
            vector<int> &pos = entry.second;
            int m = pos.size();

            ans += 1LL * m * (m - 1) / 2;

            for (int i = 0; i < m; i++)
            {
                if (binary_search(pos.begin() + i + 1, pos.end(),
                                  pos[i] + 2))
                    ans--;

                if (binary_search(pos.begin() + i + 1, pos.end(),
                                  pos[i] + 4))
                    ans--;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}