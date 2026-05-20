#include <iostream>
using namespace std;

int main()
{
      int n, x(0);
      char one, two, three;
      cin >> n;

      while (n--)
      {
            cin >> one >> two >> three;
            int total = one + two + three;
            // sum = 86 -> ++
            // sum = 90 -> --
            if (total >= 90 + 88)
                  x -= 1;
            else
                  x += 1;
      }
      cout << x << endl;
      return 0;
};