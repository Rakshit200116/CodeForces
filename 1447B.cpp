#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n, m;
            cin >> n >> m;
            int temp, sum = 0, min_neg = INT16_MAX, neg = 0;
            for (int i = 0; i < n; i++)
            {
                  for (int j = 0; j < m; j++)
                  {
                        cin >> temp;
                        if (temp <= 0)
                        {
                              neg++;
                                                }
                        min_neg = min(min_neg, abs(temp));
                        sum += abs(temp);
                  }
            }
            if (neg % 2 == 0)
                  cout << sum << endl;
            else
            {
                  sum -= 2 * abs(min_neg);
                  cout << sum << endl;
            }
      }
      return 0;
}