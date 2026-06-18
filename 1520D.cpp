#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Read the size of the array for the current test case

        vector<int> v(n); // Declare a vector to store the array elements

        for (int i = 0; i < n; i++)
        {
            cin >> v[i]; // Read each element of the array

            v[i] -= i; // Transform the array element by subtracting its index
        } //? O(n)

        // Now, v contains the transformed array a'

        map<long long, long long> freq; // Map to store frequency of each transformed value

        for (int i = 0; i < n; i++) //? O(N log N)
            freq[v[i]]++;           // Count the frequency of each transformed value

        long long ans = 0; // Initialize the answer for the current test case

        for (auto &[val, count] : freq)
        {
            // Calculate the number of pairs (i, j) for each unique transformed value
            ans += ((count) * (count - 1)) / 2; //! x choose 2
        }

        cout << ans << "\n"; // Output the result for the current test case
    }

    return 0;
}

//! Total Time Complexity (TC): O(N log N)
//! Total Space Complexity (SC): O(N)
