#include <iostream>
#include <cmath>
using namespace std;

int sort(int *arr, int n, int start = 0)
{
      if (start == n - 1)
            return 0;
      int minvalue = arr[start];
      int minindex = start;
      for (int i = start; i < n; i++)
      {
            if (arr[i] < minvalue)
            {
                  minvalue = arr[i];
                  minindex = i;
            }
      }
      int b = arr[start];
      arr[start] = minvalue;
      arr[minindex] = b;
      sort(arr, n, ++start);
}

int main()
{
      int n, m;
      cin >> n >> m;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];
      sort(arr, n);
      int sum = 0;
      for (int i = 0; i < m; i++)
      {
            if (arr[i] <= 0)
            {
                  sum = sum + (arr[i] * (-1));
            }
      }
      cout << sum;
      return 0;
}