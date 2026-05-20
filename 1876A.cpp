#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
      long long t;
      cin >> t;
      for (int i = 0; i < t; i++)
      {
            long long n, p;
            cin >> n >> p;
            vector<pair<long long, long long>> v(n);
            vector<long long> a(n), b(n);
            for (int x = 0; x < n; x++)
                  cin >> a[x];
            for (int x = 0; x < n; x++)
                  cin >> b[x];
            for (int x = 0; x < n; x++)
                  v[x] = {b[x], a[x]};
            sort(v.begin(), v.end());
            long long cost = p;
            long long shared = 1;
            for (int x = 0; x < n; x++)
            {
                  long long max_shared = v[x].second;
                  long long cost_to_share = v[x].first;
                  if (cost_to_share >= p)
                        break;
                  if (max_shared + shared > n)
                  {

                        cost += cost_to_share * (n - shared);
                        shared = n;
                        break;
                  }
                  else
                  {
                        shared += max_shared;
                        cost += max_shared * cost_to_share;
                  }
            }
            cost += p * (n - shared);
            cout << cost << endl;
      }
      return 0;
}