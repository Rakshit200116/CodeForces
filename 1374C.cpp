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
            string s;
            cin >> s;
            int ops = 0;
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                  if (s[i] == '(')
                        sum++;
                  else
                        sum--;
                  if (sum < 0)
                  {
                        sum = 0;
                        ops++;
                  }
            }
            cout << ops << endl;
      }
      return 0;
}