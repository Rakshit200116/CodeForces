#include <iostream>
using namespace std;

int gcd(int a, int b)
{
      int hcf = 1, smalldigit = min(a, b);
      while (smalldigit > 0)
      {
            if (a % smalldigit == 0 and b % smalldigit == 0)
            {
                  hcf = smalldigit;
                  break;
            }
            smalldigit--;
      }
      return hcf;
}

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            long long n;
            cin >> n;
            long long ans_a = 1, ans_b = n - 1;
            long long lcm = max(ans_a, ans_b);
            for (long long i = 1; i <= n / 2; i++)
            {
                  long long a = i;
                  long long b = n - i;
                  long long hcf = gcd(a, b);
                  long long temp = (a * b) / hcf;
                  if (temp < lcm)
                  {
                        ans_a = a;
                        ans_b = b;
                        lcm = temp;
                  }
            }
            cout << ans_a << " " << ans_b << endl;
      }
      return 0;
}