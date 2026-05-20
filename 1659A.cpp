#include <iostream>
#include <cmath>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            int r, b;
            cin >> n >> r >> b;
            int max_r = r / (b + 1);
            int extra_red = r % (b + 1);

            for (int times = 1; times <= b + 1; times++)
            {
                  for (int i = 0; i < max_r; i++)
                        cout << "R";
                  if (extra_red > 0)
                  {
                        cout << "R";
                        extra_red--;
                  }
                  if (times != b + 1)
                  {
                        cout << "B";
                  }
            }
            cout << endl;
      }
      return 0;
}
// RRBRBRBRBR