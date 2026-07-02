#include <bits/stdc++.h>
using namespace std;

int min_operations(string n, string possible_value)
{
    int operations = 0;
    int checker_index = possible_value.size() - 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] == possible_value[checker_index])
        {
            checker_index--;
            if (checker_index < 0)
                break;
        }
        else
            operations++;
    }

    if (checker_index >= 0)
        operations = INT_MAX;

    return operations; // Return the number of operations
}

int main()
{
    long long t; // Number of test cases
    cin >> t;

    while (t--)
    {
        string n; // Input number as a string
        cin >> n;

        vector<string> possible_values = {"00", "25", "50", "75"};
        int ans = INT_MAX; // Initialize the answer with a large value

        // Check for each possible ending
        for (auto possible_value : possible_values)
            ans = min(ans, min_operations(n, possible_value)); // Find the minimum operations

        cout << ans << endl; // Output the result for the current test case
    }

    return 0;
}

// Time Complexity (TC): O(4*20) = O(80)
// Space Complexity (SC): O(20)
