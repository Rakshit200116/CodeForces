#include <iostream>
#include <vector>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int a, b;
            cin >> a >> b;
            long long xor_sum = 0;
            int x = (a - 1) % 4;
            if (x == 0)
                  xor_sum = a - 1;
            else if (x == 1)
                  xor_sum = 1;
            else if (x == 2)
                  xor_sum = a;
            else
                  xor_sum = 0;

            if (xor_sum == b)
                  cout << a << endl;
            else if ((xor_sum ^ b) != a)
                  cout << a + 1 << endl;
            else
                  cout << a + 2 << endl;
      }
      return 0;
}