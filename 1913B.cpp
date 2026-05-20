#include <iostream>
using namespace std;
/*
Solution logic is right but the time complexity is very high
int main()
{
      int n;
      cin >> n;
      int ans[n];
      for (int i = 0; i < n; i++)
      {
            string t, s;
            cin >> s;
            t = s;
            for (int j = 0; j < s.size(); j++)
            {
                  t[j] = s[j] == '0' ? '1' : '0';
            }
            int tp = 0, sp = 0;
            while (tp < t.size())
            {

                  while (sp < s.size() && s[sp] != t[tp])
                  {

                        sp++;
                  }
                  if (s[sp] == t[tp] && tp <= t.size())
                  {
                        s[sp] = '2';
                        sp = 0;
                        tp++;
                  }
                  if (tp == t.size() || sp == s.size())
                  {

                        ans[i] = s.size() - tp;
                        break;
                  }
            }
      }
      for (int i = 0; i < n; i++)
            cout << ans[i] << endl;
      return 0;
}*/

// Optimized solution

int main()
{
      int t;
      cin >> t; // Read the number of test cases
      while (t--)
      {
            string s;
            cin >> s;                             // Read the binary string for the current test case
            int n = s.size();                     // Get the length of the string
            int count_of_0s = 0, count_of_1s = 0; // Initialize counters for '0's and '1's

            // Count the number of '0's and '1's in the string
            for (int i = 0; i < n; i++)
            {
                  if (s[i] == '0')
                        count_of_0s++;
                  else
                        count_of_1s++;
            }

            int length_of_t = 0; // Initialize the length of the resulting good string

            // Determine the maximum length of a good string that can be formed
            for (int i = 0; i < n; i++)
            {
                  if (s[i] == '0' && count_of_1s > 0)
                  {
                        count_of_1s--; // Use a '1' to make a pair with '0'
                        length_of_t++; // Increase the length of the good string
                  }
                  else if (s[i] == '1' && count_of_0s > 0)
                  {
                        count_of_0s--; // Use a '0' to make a pair with '1'
                        length_of_t++; // Increase the length of the good string
                  }
                  else
                  {
                        break; // No more pairs can be formed
                  }
            }

            // Output the minimum cost to make the string good
            cout << n - length_of_t << endl;
      }
      return 0;
}

// Time Complexity (TC): O(n) = O(2*10^5)
// Space Complexity (SC): O(n) = O(2*10^5)
