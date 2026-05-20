#include <iostream>
#include <algorithm>
using namespace std;

bool check(long long mid, int *arr, int x, int n)
{
      long long water = 0;
      for (int i = 0; i < n; i++)
      {
            if (mid > arr[i])
                  water += mid - arr[i];
      }
      if (water <= x)
            return true;
      else
            return false;
}

int main()
{
      long long t;
      cin >> t;
      while (t--)
      {
            int n, x;
            cin >> n >> x;
            int arr[n];
            for (int i = 0; i < n; i++)
                  cin >> arr[i];
            long long sl = 1, el = 1e12, ans = -1;
            while (sl <= el)
            {
                  long long mid = sl + (el - sl) / 2;
                  if (check(mid, arr, x, n))
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