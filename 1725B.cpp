#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
      int n, d;
      cin >> n >> d;
      vector<int> v(n);
      int ans = 0, index = 0;
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      sort(v.begin(), v.end());
      int left = -1, right = n - 1;
      int team_size = 1;
      while (left < right)
      {
            if ((v[right] * team_size <= d && left < right))
            {
                  left++;
                  team_size++;
            }
            else
            {
                  ans++;
                  right--;
                  team_size = 1;
            }
      }
      cout << ans << endl;
      return 0;
}