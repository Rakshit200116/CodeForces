#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      int n;
      while (t--)
      {
            cin >> n;
            (n / 2020 >= n % 2020) ? cout << "YES" << endl : cout << "NO" << endl;
      }
}