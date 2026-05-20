#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
                  cin >> arr[i];
            vector<int> v;
            for (int i = 1; i < n; i++)
            {
                  if (n % i == 0)
                  {

                        v.push_back(i);
                  }
            }
            long long ans = 0;
            for (int i = 0; i < v.size(); i++)
            {
                  long long maxsum = LLONG_MIN;
                  long long minsum = LLONG_MAX;
                  for (int x = 0; x < n; x += v[i])
                  {

                        long long sum = 0;
                        for (int j = x; j < x + v[i]; j++)
                        {
                              sum += arr[j];
                        }
                        maxsum = max(maxsum, sum);
                        minsum = min(minsum, sum);
                        ans = max(ans, maxsum - minsum);
                  }
            }
            cout << ans << endl;
      }
      return 0;
}

/*
8
89,870
1,34,522
78,846
33,405

*/