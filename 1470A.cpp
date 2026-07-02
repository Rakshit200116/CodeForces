#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t; // 10^^3
    while (t--)
    {
        int n, m;
        cin >> n >> m; // 3*10^^5
        int k[n];
        vector<pair<int, int>> c;
        for (int i = 0; i < n; i++)
            cin >> k[i]; // m
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp; // 10^^9}
            c.push_back({temp, 1});
        }
        sort(k, k + n, greater<int>());
        long long ans = 0;
        int last_purchased = 0;
        for (int i = 0; i < n; i++)
        {
            int index = k[i];
            int cost = c[k[i] - 1].first, check = 0;
            if (c[last_purchased].first < cost)
            {
                ans += c[last_purchased].first;
                last_purchased++;
            }
            else
                ans += cost;
            // cout << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}