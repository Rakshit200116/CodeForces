#include <iostream>
#include <cmath>
using namespace std;

bool check(long long mid, long long *arr, long long c, long long n)
{
      long long area = 0;
      for (long long i = 0; i < n; i++)
      {
            long long x = arr[i] + 2 * mid;
            area += x * x;
            if (area > c)
                  return false; // prevent overflow
      }
      return area <= c;
}

int main()
{
      long long t;
      cin >> t;
      while (t--)
      {
            long long n;
            long long c;
            cin >> n >> c;
            long long arr[n];
            for (long long i = 0; i < n; i++)
                  cin >> arr[i];
            long long sl = 0, el = 1e9;
            long long ans = 0;
            while (sl <= el)
            {
                  long long mid = sl + (el - sl) / 2;
                  if (check(mid, arr, c, n))
                  {
                        ans = mid;
                        sl = mid + 1;
                  }
                  else
                        el = mid - 1;
            }
            cout << ans << endl;
      }
      return 0;
}