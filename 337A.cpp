#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
      int n, m, arr[1000];
      cin >> n >> m;

      for (int i = 0; i < m; i++)
      {
            cin >> arr[i];
      }

      sort(arr, arr + m);
      int least = arr[m - 1] - arr[0];

      for (int i = 1; i <= m - n; ++i)
      {
            int newleast = arr[i + n - 1] - arr[i];
            if (newleast < least)
                  least = newleast;
      };
      cout << least << endl;
      return 0;
};