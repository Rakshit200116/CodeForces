#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = 0;

        int LOG = 1;
        while ((1 << LOG) <= n)
            LOG++;

        vector<vector<int>> mnTable(LOG, vector<int>(n));
        vector<vector<int>> mxTable(LOG, vector<int>(n));

        for (int i = 0; i < n; i++)
            mnTable[0][i] = mxTable[0][i] = arr[i];

        for (int k = 1; k < LOG; k++)
            for (int i = 0; i + (1 << k) <= n; i++)
            {
                mnTable[k][i] = min(mnTable[k - 1][i], mnTable[k - 1][i + (1 << (k - 1))]);
                mxTable[k][i] = max(mxTable[k - 1][i], mxTable[k - 1][i + (1 << (k - 1))]);
            }

        auto qmin = [&](int l, int r)
        {
            int k = __lg(r - l + 1);
            return min(mnTable[k][l], mnTable[k][r - (1 << k) + 1]);
        };

        auto qmax = [&](int l, int r)
        {
            int k = __lg(r - l + 1);
            return max(mxTable[k][l], mxTable[k][r - (1 << k) + 1]);
        };

        auto isGood = [&](int l, int r) -> bool
        {
            return (qmax(l, r) - qmin(l, r)) == (r - l);
        };

        for (int L = n / 2; L >= 1; L--)
        {
            if (ans >= L)
                break;
            unordered_map<int, int> lastEnd;

            vector<pair<int, int>> segs;
            for (int s = 0; s + L - 1 < n; s++)
            {
                int e = s + L - 1;
                if (isGood(s, e))
                    segs.push_back({e, qmin(s, e)});
            }

            int ptr = 0;

            unordered_map<int, bool> seen;
            int sptr = 0;

            for (int idx = 0; idx < (int)segs.size(); idx++)
            {
                int e = segs[idx].first;
                int m = segs[idx].second;

                while (sptr < idx && segs[sptr].first <= e - L)
                {
                    seen[segs[sptr].second] = true;
                    sptr++;
                }

                if (seen.count(m + L) || seen.count(m - L))
                {
                    ans = max(ans, L);
                    break;
                }
            }

            if (ans >= L)
                break;
        }

        cout << ans << "\n";
    }

    return 0;
}