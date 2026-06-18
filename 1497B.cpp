#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        int n, m;
        cin >> n >> m; // Read n (number of elements) and m (divisor)

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i]; // Read the array elements

        vector<int> rem(m); // Initialize a vector to count remainders

        // Count the frequency of each remainder when elements are divided by m
        for (int i = 0; i < n; i++)
        {
            rem[v[i] % m]++;
        }

        int ans = 0; // Initialize the answer to store the number of m-divisible arrays

        // Iterate over each possible remainder
        for (int i = 0; i < m; i++)
        {
            int x = rem[i], y = rem[(m - i) % m];

            // If both remainders are zero, continue to the next
            if ((x == 0) and (y == 0))
                continue;

            // Calculate the minimum of the two counts
            int tmp = min(x, y);

            // Adjust the counts by removing pairs
            x -= min(tmp + 1, x);
            y -= min(tmp + 1, y);

            // Increment the answer for each pair
            ans++;

            // Add the remaining elements to the answer
            ans += (x + y);

            // Reset the counts for these remainders
            rem[i] = 0;
            rem[(m - i) % m] = 0;
        }

        cout << ans << "\n"; // Output the result for the current test case
    }

    return 0;
}

// Time Complexity (TC): O(n + m)
// Space Complexity (SC): O(n + m)
