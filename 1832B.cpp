#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n, k;
            cin >> n >> k;
            int arr[n];
            for (int i = 0; i < n; i++)
                  cin >> arr[i];
            sort(arr, arr + n);
            if (k > 1)
            {
                  long long ans = 0;

                  for (int i = 0; i < k; i++)
                  {
                        int start_index = 2 * i;
                        int end_index = n - k - 1 + i;
                        long long sum = 0;
                        while (start_index <= end_index)
                        {
                              sum += arr[start_index];
                              start_index++;
                        }
                        ans = max(ans, sum);
                  }
                  cout << ans << endl;
            }
            else
            {
                  long long sum = 0;
                  if (arr[0] + arr[1] < arr[n - 1])
                  {
                        for (int i = 2; i < n; i++)
                              sum += arr[i];
                  }
                  else
                  {
                        for (int i = 0; i < n - 1; i++)
                              sum += arr[i];
                  }
                  cout << sum << endl;
            }
      }
      return 0;
}