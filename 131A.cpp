#include <iostream>
#include <cctype>
using namespace std;

int main()
{
      string s;
      cin >> s;
      int length = s.length();
      int lower = 0, upper = 0;
      for (int i = 0; i < length; i++)
      {
            if (s[i] >= 'A' && s[i] <= 'Z')
                  upper += 1;
            else
                  lower += 1;
      }
      if (length == 1)
      {
            if (islower(s[0]))
                  s[0] = toupper(s[0]);
            else
                  s[0] = tolower(s[0]);
      }
      else
      {
            if (lower == 1 && upper == length - lower && s[0] >= 'a' && s[0] <= 'z')
            {
                  s[0] = toupper(s[0]);
                  for (int i = 1; i < length; i++)
                        s[i] = tolower(s[i]);
            }
            else if (upper == length)
            {
                  for (int i = 0; i < length; i++)
                        s[i] = tolower(s[i]);
            }
      }
      cout << s;
      return 0;
}