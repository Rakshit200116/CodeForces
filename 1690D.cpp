#include <iostream>
#include <vector>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n, k;
            cin >> n >> k;
            char arr[n];
            for (int i = 0; i < n; i++)
                  cin >> arr[i];
            vector<int> w(n + 1, 0);
            int temp = 0;
            for (int i = 0; i < n; i++)
            {

                  w[i + 1] = w[i] + (arr[i] == 'W');
            }
            long long ans = INT64_MAX;
            for (int i = 0; i <= n - k; i++)
            {
                  long long diff = w[i + k] - w[i];
                  ans = min(ans, diff);
            }
            cout << ans << endl;
      }
      return 0;
}