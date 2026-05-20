#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
      int s, n, ans = 0;
      vector<pair<int, int>> v;
      cin >> s >> n;
      for (int i = 0; i < n; i++)
      {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
      }
      sort(v.begin(), v.end());
      for (int i = 0; i < v.size(); i++)
      {
            if (s > v[i].first)
            {
                  s += v[i].second;
                  ans += 1;
            }
      }
      if (ans == n)
            cout << "YES";
      else
            cout << "NO";

      return 0;
}