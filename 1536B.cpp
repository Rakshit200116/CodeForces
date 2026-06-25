#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Read number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Length of the input string

        string s;
        cin >> s; // Read input string

        string mex = ""; // Final answer: the smallest string not present in `s`

        // Step 1: Check for smallest missing single-letter string
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (s.find(c) == string::npos)
            { // If character not found in string
                mex = c;
                break;
            }
        }
        // Time Complexity for Step 1: O(26 * n)

        // Step 2: Check for smallest missing two-letter string
        for (char c1 = 'a'; c1 <= 'z'; c1++)
        {
            for (char c2 = 'a'; c2 <= 'z'; c2++)
            {
                string tmp = "";
                tmp.push_back(c1);
                tmp.push_back(c2);

                if (mex == "" && s.find(tmp) == string::npos)
                {
                    mex = tmp;
                }
            }
        }
        // Time Complexity for Step 2: O(26^2 * n)

        // Step 3: Check for smallest missing three-letter string
        for (char c1 = 'a'; c1 <= 'z'; c1++)
        {
            for (char c2 = 'a'; c2 <= 'z'; c2++)
            {
                for (char c3 = 'a'; c3 <= 'z'; c3++)
                {
                    string tmp = "";
                    tmp.push_back(c1);
                    tmp.push_back(c2);
                    tmp.push_back(c3);

                    if (mex == "" && s.find(tmp) == string::npos)
                    {
                        mex = tmp;
                    }
                }
            }
        }
        // Time Complexity for Step 3: O(26^3 * n)

        cout << mex << "\n"; // Output the lexicographically smallest missing substring
    }

    return 0;
}

// Time Complexity (TC): O(18278 * n)
// Space Complexity (SC): O(n)
