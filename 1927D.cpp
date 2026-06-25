#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        v[0].second = -1;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1].first == v[i].first)
                v[i].second = v[i - 1].second;
            else
                v[i].second = i - 1;
        }
        int q;
        cin >> q;
        vector<pair<int, int>> ans;
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;

            if (v[r].second >= l)
                ans.push_back({v[r].second + 1, r + 1});
            else
                ans.push_back({-1, -1});
        }
        for (int i = 0; i < q; i++)
            cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}