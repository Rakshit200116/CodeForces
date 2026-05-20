#include <iostream>
using namespace std;

int check(unsigned long long n, int count = 0)
{
      if (n == 1)
            return count;
      else if (n <= 6)
      {
            if (n == 3)
                  return count + 2;
            else if (n == 6)
                  return count += 1;
            else
                  return -1;
      }
      else if (n % 3 != 0)
            return -1;
      else if (n % 6 == 0)
      {
            count++;
            check(n / 6, count);
      }
      else if (n % 3 == 0)
      {
            count += 2;
            check(n / 3, count);
      }
}

int main()
{
      int t;
      cin >> t;
      int arr[t];
      for (int i = 0; i < t; i++)
      {
            unsigned long long num;
            cin >> num;
            arr[i] = check(num);
      }
      for (int i = 0; i < t; i++)
      {
            cout << arr[i] << endl;
      }
      return 0;
}