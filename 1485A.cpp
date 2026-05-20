#include <iostream>
#include <cmath>
using namespace std;

int divisor(int a, int b)
{
      int count = 0;
      while (a != 0)
      {
            a = floor(a / b);
            count++;
      }
      return count;
}

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int a, b;
            cin >> a >> b;
            if (b > a)
                  cout << 1 << endl;
            else if (b == a)
                  cout << 2 << endl;
            else
            {
                  int temp = 0;
                  if (b == 1)
                  {
                        temp++;
                        b++;
                  }
                  int ans = temp + divisor(a, b);
                  while (temp + divisor(a, b) <= ans)
                  {
                        temp++;
                        b++;
                        ans = min(ans, temp + divisor(a, b));
                  }
                  cout << ans << endl;
            }
      }
      return 0;
}