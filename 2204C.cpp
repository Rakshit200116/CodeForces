#include <iostream>
#include <algorithm>
using namespace std;

long long lcm(long long a, long long b)
{
      return (a / __gcd(a, b)) * b;
}

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            long long a, b, c, m;
            cin >> a >> b >> c >> m;
            long long a_only = m / a;
            long long b_only = m / b;
            long long c_only = m / c;

            long long a_b = m / lcm(a, b);
            long long b_c = m / lcm(b, c);
            long long c_a = m / lcm(a, c);

            long long a_b_c = m / lcm(lcm(a, b), c);

            long long alice = (a_b_c) * 2 + (a_b - a_b_c + c_a - a_b_c) * 3 + (a_only - a_b - c_a + a_b_c) * 6;
            long long bob = (a_b_c) * 2 + (b_c - a_b_c + a_b - a_b_c) * 3 + (b_only - a_b - b_c + a_b_c) * 6;
            long long carol = (a_b_c) * 2 + (b_c - a_b_c + c_a - a_b_c) * 3 + (c_only - b_c - c_a + a_b_c) * 6;
            cout << alice << " " << bob << " " << carol << endl;
      }
      return 0;
}