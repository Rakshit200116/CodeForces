#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    map<long long, vector<long long>> mp;
    long long sum = 0;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]].push_back(i + 1);
        sum += arr[i];
    }
    set<long long> ans;
    for (int i = 0; i < n; i++)
    {
        long long num = sum - arr[i];
        long long req = num - arr[i];
        if (req <= 0)
            continue;
        if (mp[req].size() == 0)
            continue;
        // cout << i << endl;
        for (int j = 0; j < mp[req].size(); j++)
        {
            if (mp[req][j] != i + 1)
                ans.insert(mp[req][j]);
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
}