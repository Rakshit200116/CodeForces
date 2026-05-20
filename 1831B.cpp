#include <iostream>
#include <vector>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            int a[n], b[n];
            for (int i = 0; i < n; i++)
                  cin >> a[i];
            for (int i = 0; i < n; i++)
                  cin >> b[i];
            vector<int> max_subarr_a((2 * n) + 1);
            vector<int> max_subarr_b((2 * n) + 1);
            int counter = 1;
            for (int i = 1; i < n; i++)
            {
                  if (a[i - 1] == a[i])
                        counter++;
                  else
                  {
                        max_subarr_a[a[i - 1]] = max(max_subarr_a[a[i - 1]], counter);
                        counter = 1;
                  }
            }
            max_subarr_a[a[n - 1]] = max(max_subarr_a[a[n - 1]], counter);
            counter = 1;
            for (int i = 1; i < n; i++)
            {
                  if (b[i - 1] == b[i])
                        counter++;
                  else
                  {
                        max_subarr_b[b[i - 1]] = max(max_subarr_b[b[i - 1]], counter);
                        counter = 1;
                  }
            }
            max_subarr_b[b[n - 1]] = max(max_subarr_b[b[n - 1]], counter);
            int max_freq = 0;
            for (int i = 0; i <= 2 * n; i++)
            {
                  max_freq = max(max_freq, max_subarr_a[i] + max_subarr_b[i]);
            }
            cout << max_freq << endl;
      }
      return 0;
}