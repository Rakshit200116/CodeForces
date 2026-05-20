#include <iostream>
#include <vector>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int x_ans = 0, y_ans = 0, z_ans = 0;
      int x, y, z;
      for (int i = 0; i < n; i++)
      {

            cin >> x >> y >> z;
            x_ans += x;
            y_ans += y;
            z_ans += z;
      }

      if (x_ans == 0 && y_ans == 0 && z_ans == 0)
            cout << "YES";
      else
            cout << "NO";

      return 0;
}