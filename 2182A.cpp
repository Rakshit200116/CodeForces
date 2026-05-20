#include <iostream>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int ans[n];
      for (int i = 0; i < n; i++)
      {
            int t;
            cin >> t;
            string arr;
            cin >> arr;
            int prev = 0, ny = 0;
            for (int x = 0; x < t - 3; x++)
            {
                  if (arr[x] == '2' && arr[x + 1] == '0' && arr[x + 2] == '2' && arr[x + 3] == '5')
                  {
                        prev += 1;
                  }
                  else if (arr[x] == '2' && arr[x + 1] == '0' && arr[x + 2] == '2' && arr[x + 3] == '6')
                  {
                        ny += 1;
                  }
            }
            if (prev == 0)
                  ans[i] = 0;
            else
            {
                  if (ny > 0)
                        ans[i] = 0;
                  else
                        ans[i] = 1;
            }
      }
      for (int i = 0; i < n; i++)
      {
            cout << ans[i] << endl;
      }

      return 0;
}