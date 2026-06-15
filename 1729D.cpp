#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Read the number of friends

        vector<int> x(n), y(n); // Vectors to store the planned spending and available budget

        for (int i = 0; i < n; i++)
            cin >> x[i]; // Read the planned spending for each friend

        for (int i = 0; i < n; i++)
            cin >> y[i]; // Read the available budget for each friend

        multiset<int> ms; // Multiset to store the difference between budget and spending

        for (int i = 0; i < n; i++)
            ms.insert(y[i] - x[i]); // Calculate and insert the difference into the multiset

        int ans = 0; // Variable to store the maximum number of days

        while (ms.size() > 1) // While there are at least two friends to form a group
        {
            int val1 = *ms.begin(); // Get the smallest difference
            ms.erase(ms.begin());   // Remove the smallest difference from the multiset

            auto it = ms.lower_bound(-val1); // Find a partner such that their combined difference is non-negative

            if (it == ms.end())
                continue; // If no such partner is found, continue to the next iteration

            ans++;        // A valid group is formed, increment the answer
            ms.erase(it); // Remove the partner's difference from the multiset
        }

        cout << ans << "\n"; // Output the maximum number of days
    }

    return 0;
}

// Total Time Complexity (TC): O(N log N)
// Total Space Complexity (SC): O(N)
