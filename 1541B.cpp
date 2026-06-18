#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back({temp, i + 1});
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int ai = v[i].first;
            int i_index = v[i].second;
            for (int j = 0; j < n; j++)
            {
                int bi = v[j].first;
                int j_index = v[j].second;
                if ((ai * bi) > 2 * n)
                    break;
                else if (ai * bi == i_index + j_index && j_index > i_index)
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}