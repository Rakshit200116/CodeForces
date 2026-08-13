#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int trailing_zeros(long long x)
{
    int ans = 0;
    vector<int> dig;
    while (x > 0)
    {
        dig.push_back(x % 10);
        x /= 10;
    }
    for (int i = 0; i < dig.size(); i++)
    {
        if (dig[i] != 0)
            break;
        ans++;
    }
    return ans;
}

long long rev(long long x)
{
    vector<int> v;
    while (x > 0)
    {
        v.push_back(x % 10);
        x /= 10;
    }
    long long ans = 0;
    int length = v.size() - 1;
    for (int i = 0; i < v.size(); i++)
    {
        ans += v[i] * (pow(10, length - i));
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
        vector<pair<int, long long>> v;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            v.push_back({trailing_zeros(temp), temp});
        }
        sort(v.begin(), v.end(), greater<pair<int, long long>>());
        while (v.size() > 1)
        { // anna's chance
            if (v[0].first > 0)
            {
                v.push_back({0, rev(v[0].second)});
                v.erase(v.begin());
            }

            // sasha's chance
                }
    }
    return 0;
}