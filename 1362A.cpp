#include <iostream>
#include <cmath>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            long long a, b;
            cin >> a >> b;
            if (a == b)
                  cout << 0 << endl;
            else
            {
                  int x = 0, y = 0;
                  while (a % 2 == 0)
                  {
                        a /= 2;
                        x++;
                  }
                  while (b % 2 == 0)
                  {
                        b /= 2;
                        y++;
                  }
                  if (a != b)
                        cout << -1 << endl;
                  else
                  {
                        cout << ceil(abs(x - y) / 3.0) << endl;
                  }
            }
      }
      return 0;
}