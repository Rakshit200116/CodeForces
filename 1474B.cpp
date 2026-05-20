#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n)
{
      if (n <= 1)
            return false;

      for (long long i = 2; i <= sqrt(n); i++)
      {
            if (n % i == 0)
                  return false;
      }

      return true;
}

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int d;
            cin >> d;
            long long p = d + 1;

            while (isPrime(p) != true)
            {
                  p++;
            }
            long long q = p + d;
            while (isPrime(q) != true)
                  q++;
            cout << min(p * p * p, p * q) << endl;
      }
      return 0;
}