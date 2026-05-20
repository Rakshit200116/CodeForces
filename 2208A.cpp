#include <iostream>
#include <vector>
using namespace std;

int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int n;
            cin >> n;

            vector<int> hash(n * n, 0);

            for (int i = 0; i < n; i++)
            {
                  for (int j = 0; j < n; j++)
                  {
                        int temp;
                        cin >> temp;
                        hash[temp - 1]++;
                  }
            }
            bool ans = true;
            for (int i = 0; i < n * n; i++)
                  if (hash[i] > n * n - n)
                        ans = false;
            if (ans)
                  cout << "YES" << endl;
            else
                  cout << "NO" << endl;
      }

      return 0;
}