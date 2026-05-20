#include <iostream>
using namespace std;

int main()
{
      int winner = 0;
      int n, m;
      cin >> n >> m;

      do
      {
            n--;
            m--;
            winner = 1 - winner;
      } while (n != 0 && m != 0);
      if (winner == 1)
            cout << "Akshat";
      else
            cout << "Malvika";
      return 0;
}