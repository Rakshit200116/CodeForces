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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i]; // Read the elements of the array

        // If the array has only one element, the minimum size of b is 1
        if (v.size() == 1)
        {
            cout << "1\n";
            continue;
        }

        vector<int> ans;     // This will store the subsequence b
        ans.push_back(v[0]); // Start with the first element
        ans.push_back(v[1]); // Add the second element

        // Iterate through the rest of the array
        for (int i = 2; i < n; i++)
        {
            int currSize = ans.size(); // Current size of the subsequence

            // Calculate differences to determine contrast
            int x = ans[currSize - 2] - ans[currSize - 1];
            int y = ans[currSize - 1] - v[i];

            // Check the contrast conditions
            if (x > 0)
            {
                if (y > 0)
                    ans[currSize - 1] = v[i]; // Replace last element if contrast is maintained
                else if (y < 0)
                    ans.push_back(v[i]); // Add new element if contrast is increased
            }
            else
            {
                if (y < 0)
                    ans[currSize - 1] = v[i]; // Replace last element if contrast is maintained
                else if (y > 0)
                    ans.push_back(v[i]); // Add new element if contrast is increased
            }
        }

        int finalSize = ans.size(); // Determine the final size of the subsequence
        // If the first two elements are the same, reduce the size by one
        if (ans[0] == ans[1])
            finalSize--;

        cout << finalSize << "\n"; // Output the minimum possible size of b
    }
}

// Time Complexity (TC): O(N)
// Space Complexity (SC): O(N)
