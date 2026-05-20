#include <iostream>
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

int gap(int *arr, int n, int k)
{
      int gaparr[n];
      for (int i = 0; i < n - 1; i++)
      {
            int length = 0;
            for (int j = i; j < n - 1; j++)
            {
                  if (arr[j + 1] <= arr[j] + k)
                  {
                        length++;
                        cout << 'h';
                  }
                  else
                  {
                        cout << "a";
                        i = j + 1;
                        break;
                  }
            }
            cout << length << " ";
            gaparr[i] = length;
      }

      return 0;
}

int main()
{
      int t;
      cin >> t;
      for (int i = 0; i < t; i++)
      {
            int n, k;
            cin >> n >> k;
            int arr[n];
            for (int j = 0; j < n; j++)
                  cin >> arr[j];
            sort(arr, n);
            gap(arr, n, k);
      }
      return 0;
}