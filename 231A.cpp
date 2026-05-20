#include <iostream>
using namespace std;

int main()
{
      int n, tonya, patya, vatsa, number(0);
      cin >> n;

      while (n--)
      {
            cin >> tonya >> patya >> vatsa;
            if (tonya + patya + vatsa >= 2)
                  number += 1;
      };
      cout << number;
      return 0;
}