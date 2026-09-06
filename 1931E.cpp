#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trailing_zero(int n)
{
    int ans = 0;
    while (n > 0)
    {
        if (n % 10 == 0)
            ans++;
        else
            break;
        n /= 10;
    }
    return ans;
}

int digits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans++;
        n /= 10;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back({trailing_zero(temp), digits(temp)});
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        for (int i = 0; i < n; i += 2)
        {
            v[i].second -= v[i].first;
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += v[i].second;
        }
        // cout << ans << endl;
        if (ans > m)
            cout << "Sasha" << endl;
        else
            cout << "Anna" << endl;
    }
    return 0;
}