#include <iostream>
using namespace std;

int main()
{
      long long n;
      cin >> n;
      if (n >= 0)
            cout << n;
      else
      {
            long long last = n / 10;
            int lastdigit = n % 10;
            long long sec = (n / 100) * 10 + lastdigit;
            cout << max(last, sec);
      }
      return 0;
}