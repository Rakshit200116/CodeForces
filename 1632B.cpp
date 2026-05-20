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
            int min_cost = 1;
            while (min_cost * 2 < n)
                  min_cost = min_cost * 2;
            for (int i = min_cost - 1; i >= 0; i--)
            {
                  cout << i << " ";
            }
            for (int i = min_cost; i < n; i++)
                  cout << i << " ";
            cout << endl;
      };
      return 0;
}