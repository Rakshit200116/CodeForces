#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, w;
        cin >> n >> w;
        map<int, int, greater<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            mp[temp]++;
        }
        // cout << mp.size() << endl;
        int ans = 0;
        while (n)
        {
            int width = w;
            for (auto &x : mp)
            {
                // cout << x.first << " " << width << endl;
                while (x.first <= width && x.second > 0)
                {
                    width -= x.first;
                    x.second = x.second - 1;
                    n--;
                }
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}