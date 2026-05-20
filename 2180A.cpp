#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      int arr[t];
      for (int i = 0; i < t; i++)
      {
            int l, a, b;
            cin >> l >> a >> b;
            int max = 0;
            for (int i = 0; i < l; i++)
            {
                  a = a + b;
                  while (a >= l)
                        a -= l;
                  if (a > max)
                        max = a;
            }
            arr[i] = max;
      }
      for (int i = 0; i < t; i++)
            cout << arr[i] << endl;
}