#include <iostream>
#include <vector>
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
            vector<pair<int, int>> v(n);

            for (int i = 0; i < n; i++)
            {
                  int temp;
                  cin >> temp;
                  if (temp % k != 0)
                  {
                        v[i] = {temp % k, n - i + 1};
                  }
                  else
                  {
                        v[i] = {k, n - i + 1};
                  }
            }
            sort(v.begin(), v.end());
            for (int i = n - 1; i >= 0; i--)
                  cout << n + 2 - v[i].second << " ";
            cout << endl;
      }
      return 0;
}