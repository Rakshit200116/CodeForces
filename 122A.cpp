#include <iostream>
#include <string>
using namespace std;

/* List of Lucky Numbers - [4,7,47,74,444,447,477,744,747,777]
 */

int main()
{
      int s;
      cin >> s;
      int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
      int ans = 0;
      for (int i = 0; i < 14; i++)
      {
            if (s % arr[i] == 0)
                  ans = 1;
      }
      if (ans == 1)
            cout << "YES";
      else
            cout << "NO";
      return 0;
}