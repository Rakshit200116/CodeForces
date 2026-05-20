#include <iostream>
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
            int ops = 0;
            while (n > 0)
            {
                  int pointer = 0;
                  int biggest = 1;
                  for (int i = 0; i < n; i++)
                  {
                        if (arr[i] >= biggest)
                        {
                              biggest = arr[i];
                              pointer = i;
                        }
                  }
                  ops++;
                  n = pointer;
            }
            cout << ops << endl;
      }
      return 0;
}