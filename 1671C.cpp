#include <bits/stdc++.h>

using namespace std;

// Function to check if the cost of the ith packet is less than or equal to x for that day
// If true, it means we can buy it
bool pf(long long val, int ind, int x, int mid)
{
    if (val + (1LL * (ind + 1) * (mid - 1)) <= x)
        return true;
    return false;
}

// Function to perform binary search to find the maximum number of days we can buy the packet
int binSearch(long long val, int ind, int x)
{
    int low = 1, high = 1e9 + 5;
    int ans = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        // Check if we can buy the packet on the mid-th day
        if (pf(val, ind, x, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    } //? O(32)

    return ans;
} //? O(32)

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> cost(n);        //! a
        for (int i = 0; i < n; i++) //? O(N)
            cin >> cost[i];

        // Sort the costs to buy cheaper packets first
        sort(cost.begin(), cost.end()); //! b
        //? O(N log N)

        // Create a prefix sum array to store cumulative costs
        vector<long long> presum(n);

        presum[0] = cost[0];
        for (int i = 1; i < n; i++)
        {
            presum[i] = presum[i - 1] + cost[i];
        } //? O(N)

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            // Calculate the total number of days we can buy packets
            ans += binSearch(presum[i], i, x); //? O(32)
        } //? O(N * 32)

        cout << ans << "\n";
    }

    return 0;
}

//! Total Time Complexity (TC): O(N * 32 + N log N)
//! Total Space Complexity (SC): O(N)
