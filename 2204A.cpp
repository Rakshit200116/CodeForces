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
            int ans = 2;
            for (int i = 0; i < n - 1; i++)
            {
                  if (s[i] == 'R' && s[i + 1] == 'L')
                  {
                        ans += i;
                        break;
                  }
            }
            cout << ans << endl;
      }
      return 0;
}