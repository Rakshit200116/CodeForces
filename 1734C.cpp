#include <iostream>
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
        string s;
        cin >> s;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({(s[i] == '0' ? 0 : 1), 0});
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int k = i + 1;
            // cout << k << endl;
            while (k < n + 1)
            {
                if (v[k - 1].first == 1)
                    break;
                if (v[k - 1].second == 0)
                {
                    // cout << k << " ";
                    v[k - 1].second = 1;
                    ans += i + 1;
                }
                k += i + 1;
            }
            // cout << endl;
        }
        cout << ans << endl;
    }
    return 0;
}