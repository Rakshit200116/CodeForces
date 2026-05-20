#include <iostream>
using namespace std;

int main()
{
      int n;
      cin >> n;
      string a, b, temp;
      int a_score = 0, b_score = 0;
      for (int i = 0; i < n; i++)
      {
            if (i == 0)
            {
                  cin >> a;
                  a_score++;
            }
            else
            {
                  cin >> temp;
                  if (temp == a)
                        a_score++;
                  else
                  {
                        b_score++;
                        b = temp;
                  }
            }
            }
      if (a_score > b_score)
            cout << a;
      else
            cout << b;
      return 0;
}