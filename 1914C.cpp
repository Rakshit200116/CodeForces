#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n, k;
            cin >> n >> k;
            int a[n];
            for (int i = 0; i < n; i++)
                  cin >> a[i];
            int b[n];
            for (int i = 0; i < n; i++)
                  cin >> b[i];

            int maxi = 0; // Variable to store the maximum experience points for subsequent completions
            int sum = 0;  // Variable to store the cumulative experience points
            int ans = 0;  // Variable to store the maximum possible total experience

            // Calculate the maximum possible total experience
            for (int i = 0; i < min(n, k); i++)
            {
                  sum += a[i];                                // Add the experience points for the first completion
                  maxi = max(maxi, b[i]);                     // Update the maximum experience points for subsequent completions
                  ans = max(ans, sum + (k - (i + 1)) * maxi); // Calculate the maximum possible total experience
            }
            cout << ans << endl;
      }
      return 0;
}