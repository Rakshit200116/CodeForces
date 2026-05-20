#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      string ans[t];
      for (int i = 0; i < t; i++)
      {
            int n;
            cin >> n;
            string s = "";
            string arr[n];
            for (int j = 0; j < n; j++)
                  cin >> arr[j];
            for (int j = 0; j < n; j++)
            {
                  string first = arr[j] + s;
                  string end = s + arr[j];
                  if (std::string(first) > std::string(end))
                        s = end;
                  else
                        s = first;
            }
            ans[i] = s;
      }
      for (int i = 0; i < t; i++)
            cout << ans[i] << endl;
}