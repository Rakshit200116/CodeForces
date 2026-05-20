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
            int n, m;
            long long sum = 0;
            long long smallest_first = INT64_MAX, smallest_sec = INT64_MAX;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                  cin >> m;
                  vector<long long> v(m);
                  for (int x = 0; x < m; x++)
                  {
                        cin >> v[x];
                  }
                  sort(v.begin(), v.end());
                  sum += v[1];
                  smallest_first = min(smallest_first, v[0]);
                  smallest_sec = min(smallest_sec, v[1]);
            }
            long long ans = sum - smallest_sec + smallest_first;
            cout << ans << endl;
      }
      return 0;
}