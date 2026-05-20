#include <iostream>
#include <vector>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            vector<pair<int, int>> v(n + 1);
            for (int i = 1; i <= n; i++)
            {
                  cin >> v[i].first;
                  v[i].second = 0;
            }
            int condition = n / 2;
            int ans = 0;
            for (int i = 1; i <= n; i++)
            {
                  if (v[i].second == 1)
                  {
                        break;
                  }
                  if (v[i].first <= i && v[i].second == 0)
                  {
                        ans++;
                        v[v[i].first].second = 1;
                  }
            }
            cout << ans << endl;
      }
      return 0;
}