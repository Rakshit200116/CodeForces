#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int h[n];
        vector<pair<ll, int>> k(q); // {query value, original index}

        for (int i = 0; i < n; i++)
            cin >> h[i];
        for (int i = 0; i < q; i++)
        {
            cin >> k[i].first;
            k[i].second = i;
        }

        // Sort queries by value so pointer only moves forward
        sort(k.begin(), k.end());

        long long height = 0;
        int last_stair = 0;
        vector<ll> ans(q);

        for (int i = 0; i < q; i++)
        {
            ll leg = k[i].first;
            while (last_stair < n && h[last_stair] <= leg)
            {
                height += h[last_stair];
                last_stair++;
            }
            ans[k[i].second] = height; // store at original index
        }

        for (int i = 0; i < q; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}