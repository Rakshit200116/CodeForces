#include <iostream>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int *arr = new int[n];
      for (int x = 0; x < n; x++)
      {
            {
                  long long int j, k;
                  cin >> j;
                  if (j % 2 == !0 && j > 1)
                  {
                        arr[x] = 1;
                        continue;
                  }
                  else
                  {
                        while (j % 2 == 0)
                        {
                              j /= 2;
                        }
                        if (j == 1)
                              arr[x] = 0;
                        else
                              arr[x] = 1;
                  }
            }
      }
      for (int x = 0; x < n; x++)
      {
            if (arr[x] == 0)
                  cout << "NO" << endl;
            else
                  cout << "YES" << endl;
      }
      return 0;
}