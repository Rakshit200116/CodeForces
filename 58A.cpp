#include <iostream>
using namespace std;

int main()
{
      string s;
      cin >> s;
      int n = s.size();
      string word = "hello";
      int j = 0, pass = 0;
      for (int i = 0; i < n; i++)
      {
            if (s[i] == word[j])
            {
                  j++;
                  pass++;
            }
      }
      if (pass == 5)
            cout << "YES";
      else
            cout << "NO";
      return 0;
}