#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        int n, k;
        cin >> n >> k; // Read the number of spots (n) and the hour (k)

        k--; // Adjust k to be zero-indexed for easier calculations

        if (n % 2 == 0) // Check if the number of spots is even
        {
            int ans = k % n;             // Calculate the position for cat B
            cout << (k % n) + 1 << "\n"; // Output the 1-indexed position
        }
        else
        {
            int val = n / 2; // Calculate the extra step needed for odd n

            // Calculate the position for cat B considering the extra step
            cout << ((k + (k / val)) % n) + 1 << "\n";
        }
    }

    return 0;
}

//! Total Time Complexity (TC): O(t)
//! Total Space Complexity (SC): O(t)
