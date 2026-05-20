#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n, k, a, b;
            cin >> n >> k >> a >> b;

            vector<pair<long long, long long>> v(n);

            for (int i = 0; i < n; i++)
                  cin >> v[i].first >> v[i].second;

            long long direct =
                llabs(v[a - 1].first - v[b - 1].first) +
                llabs(v[a - 1].second - v[b - 1].second);

            if (k == 0)
            {
                  cout << direct << endl;
                  continue;
            }

            long long min_a = LLONG_MAX, min_b = LLONG_MAX;

            // distance from a to nearest special
            if (a <= k)
                  min_a = 0;
            else
            {
                  for (int i = 0; i < k; i++)
                  {
                        long long d =
                            llabs(v[i].first - v[a - 1].first) +
                            llabs(v[i].second - v[a - 1].second);

                        min_a = min(min_a, d);
                  }
            }

            // distance from b to nearest special
            if (b <= k)
                  min_b = 0;
            else
            {
                  for (int i = 0; i < k; i++)
                  {
                        long long d =
                            llabs(v[i].first - v[b - 1].first) +
                            llabs(v[i].second - v[b - 1].second);

                        min_b = min(min_b, d);
                  }
            }

            cout << min(direct, min_a + min_b) << endl;
      }

      return 0;
}