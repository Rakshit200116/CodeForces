#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n, k, p, m;
            cin >> n >> k >> p >> m;
            int arr[n + 1];
            for (int i = 1; i < n + 1; i++)
                  cin >> arr[i];
            int ans = 0;
            while (m > 0)
            {
                  if (p <= k)
                  {

                        int temp = arr[p];
                        if (temp > m)
                              break;
                        ans++;
                        m -= temp;

                        for (int i = p; i < n; i++)
                        {
                              arr[i] = arr[i + 1];
                        }
                        p = n;
                        arr[n] = temp;
                  }
                  else
                  {
                        int minhealth = 5000;
                        int index = 0;
                        for (int i = 1; i <= k; i++)
                        {
                              if (arr[i] < minhealth)
                              {
                                    minhealth = arr[i];
                                    index = i;
                              }
                        }
                        int temp = arr[index];
                        if (temp > m)
                              break;
                        m -= temp;
                        for (int i = index; i < n; i++)
                        {
                              arr[i] = arr[i + 1];
                        }
                        arr[n] = temp;
                        p--;
                  }
            }
            cout << ans << endl;
      }
      return 0;
}
