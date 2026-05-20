#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            long long n, k, b, s;
            cin >> n >> k >> b >> s;
            long long s_min = b * k;
            long long s_max = b * k + (k - 1) * n;
            if (s < s_min || s > s_max)
            {
                  cout << -1 << endl;
                  continue;
            }
            else
            {
                  long long arr[n] = {0};
                  arr[0] = k * b;
                  long long index = 0;
                  s -= s_min;
                  while (s > 0)
                  {
                        arr[index] += min(s, k - 1);
                        s -= k - 1;
                        index++;
                  }
                  for (int i = 0; i < n; i++)
                        cout << arr[i] << " ";
                  cout << endl;
            }
      }
      return 0;
}