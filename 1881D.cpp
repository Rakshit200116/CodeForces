#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> factor(int n)
{
    vector<int> ans;
    for (int j = 2; j * j <= n; j++)
    {
        while (n % j == 0)
        {
            ans.push_back(j);
            n /= j;
        }
    }

    if (n > 1)
        ans.push_back(n);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            vector<int> prime = factor(arr[i]);
            for (int j = 0; j < prime.size(); j++)
            {
                mp[prime[j]]++;
            }
        }
        bool ans = true;
        for (auto x : mp)
        {
            if (x.second % n != 0)
                ans = false;
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}
