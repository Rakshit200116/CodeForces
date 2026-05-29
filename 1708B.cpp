#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    ll l, r;
    cin >> l >> r;
    vector<ll> ans; // Vector to store the result array

    // Loop through each index from 1 to n
    for (int i = 1; i <= n; i++)
    {
        // Calculate the smallest multiple of i that is >= l
        ll temp = ((l + i - 1) / i) * i;
        ans.push_back(temp); // Add the calculated value to the result array

        // If the calculated value exceeds r, no valid array can be formed
        if (temp > r)
        {
            cout << "NO" << endl;
            return;
        }
    }

    // If all values are within the range, print "YES" and the array
    cout << "YES" << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    // Time Complexity (TC): O(n)
    // Space Complexity (SC): O(n)
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
