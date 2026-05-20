#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      int ans[t];
      for (int i = 0; i < t; i++)
      {
            int n, s, x, sum = 0;
            cin >> n >> s >> x;
            int a[n];
            for (int j = 0; j < n; j++)
            {
                  cin >> a[j];
                  sum += a[j];
            }
            if (sum == s)
                  ans[i] = 1;
            else if (sum > s)
                  ans[i] = 0;
            else
            {
                  int req = s - sum;
                  if (req % x == 0)
                        ans[i] = 1;
                  else
                        ans[i] = 0;
            }
      }
      for (int i = 0; i < t; i++)
      {
            if (ans[i] == 1)
                  cout << "YES" << endl;
            else
                  cout << "NO" << endl;
      }
      return 0;
}