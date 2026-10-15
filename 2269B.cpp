#include <iostream>
#include <vector>
#include <map>
using namespace std;

long long sumofsquare(int n)
{
    long long ans = 0;
    while (n > 0)
    {
        int digit = n % 10;
        ans += digit * digit;
        n /= 10;
    }
    return ans;
}

pair<int, bool> finder(int n)
{
    vector<int> final = {4, 16, 37, 58, 89, 145, 42, 20};
    for (int i = 0; i < final.size(); i++)
        if (final[i] == n)
            return {i, true};
    return {0, false};
}

pair<int, int> cycle(int n, int &ops)
{
    int sum = sumofsquare(n);
    // cout << sum << endl;
    ops++;
    if (sum == 1)
        return {-1, -1};
    pair<int, bool> ans = finder(sum);
    if (ans.second)
        return {ans.first, ops}; //{k,s};
    return cycle(sum, ops);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> final;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            int ops = 0;
            pair<int, int> ans = cycle(temp, ops); // k,s
            // cout << ans.first << " " << ans.second << endl;
            if (ans.first == -1)
            {
                // cout << temp << endl;
                final[9]++;
            }
            else
            {
                int x = (ans.first - ans.second) % 8;
                if (x < 0)
                    x += 8;
                final[x]++;
            }
        }
        long long finalans = 0;
        for (auto x : final)
        {
            // cout << x.first << " " << x.second << endl;
            int temp = x.second * (x.second - 1) / 2;
            finalans += temp;
        }
        cout << finalans << endl;
    }
    return 0;
}