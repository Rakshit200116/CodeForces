#include <iostream>
using namespace std;
#include <cmath>

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            long long w, n, temp;
            cin >> n >> w;
            temp = floor(n / w);
            long long ans = n - temp;
            cout << ans << endl;
      }
      return 0;
}