#include <iostream>
#include <cmath>
#include <unordered_set>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            unordered_set<long long> s;
            for (int i = 0; i < n; i++)
            {
                  long long temp;
                  cin >> temp;
                  s.insert(temp);
            }
            if (s.size() < n)
                  cout << "YES" << endl;
            else
                  cout << "NO" << endl;
      }
      return 0;
}