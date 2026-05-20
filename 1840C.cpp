#include <iostream>
using namespace std;

int main()
{
      long long t;
      cin >> t;
      while (t--)
      {
            long long n, k, q;
            cin >> n >> k >> q;
            long long arr[n];
            long long ways = 0;
            for (long long i = 0; i < n; i++)
            {
                  long long temp;
                  cin >> temp;
                  if (temp <= q)
                  {
                        arr[i] = 1;
                  }
                  else
                  {
                        arr[i] = 0;
                  }
            }
            long long cout_of_one = 0;
            for (long long i = 0; i < n; i++)
            {
                  if (arr[i] == 1)
                  {
                        cout_of_one++;
                  }
                  else
                  {
                        if (cout_of_one >= k)
                        {
                              long long y = cout_of_one - k + 1;
                              ways += (y * (y + 1)) / 2;
                        }
                        cout_of_one = 0;
                  }
            }

            if (cout_of_one >= k)
            {
                  long long y = cout_of_one - k + 1;
                  ways += (y * (y + 1)) / 2;
            }
            cout << ways << endl;
      }
      return 0;
}