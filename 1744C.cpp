#include <bits/stdc++.h>
using namespace std;

int main()
{
      long long t;
      cin >> t; // Read the number of test cases
      while (t--)
      {
            long long n;
            cin >> n; // Read the length of the string
            char color;
            cin >> color; // Read the current color of the traffic light
            string s;
            cin >> s; // Read the traffic light color sequence

            // Duplicate the string to simulate the cyclic nature of the traffic light
            s += s;

            // Update n to reflect the new length of the duplicated string
            n *= 2;

            // Initialize variables to track the last seen green light index and the maximum wait time
            long long last_green_index = -1;
            long long max_seconds = INT_MIN;

            // Traverse the string from the end to the beginning
            for (int i = n - 1; i >= 0; i--)
            {
                  // Update the last seen green light index
                  if (s[i] == 'g')
                        last_green_index = i;

                  // If the current color matches the given color, calculate the wait time
                  if (s[i] == color)
                  {
                        long long difference = last_green_index - i;
                        // Update the maximum wait time
                        max_seconds = max(max_seconds, difference);
                  }
            }
            // Output the maximum wait time for the current test case
            cout << max_seconds << endl;
      }
      return 0;
}

// Time Complexity (TC): O(n) = O(2*10^5)
// Space Complexity (SC): O(n) = O(2*10^5)
