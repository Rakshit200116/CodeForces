#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      int ans_arr[t];
      for (int i = 0; i < t; i++)
      {
            int ans = 0;
            int n, h, l;
            cin >> n >> h >> l;
            int arr[n];
            for (int j = 0; j < n; j++)
                  cin >> arr[j];
            int row = 0, col = 0;

            while (row < n && col < n)
            {

                  while (arr[row] > h || arr[row] == -1 || row == col)
                  {
                        row++;
                  }
                  while ((arr[col] > l) || row == col || arr[col] == -1)
                  {
                        col++;
                  }
                  if (row < n && col < n && row != col)
                  {
                        ans++;
                        arr[row] = -1;
                        arr[col] = -1;
                        row++;
                        col++;
                  }
            }
            ans_arr[i] = ans;
      }
      for (int i = 0; i < t; i++)
            cout << ans_arr[i] << endl;
      return 0;
}