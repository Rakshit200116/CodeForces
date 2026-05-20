#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
      long long t;
      cin >> t;
      while (t--)
      {
            long long n;
            cin >> n;
            // v = {visits,i th building}
            vector<pair<long long, long long>> v(n);
            for (long long i = 0; i < n; i++)
            {
                  long long visits;
                  cin >> visits;
                  v[i] = {visits, i + 1};
            }
            sort(v.begin(), v.end());
            long long pointer = n - 1;
            long long index = 0, loc = -1;
            // pos = {i th building, pos}
            vector<pair<long long, long long>> pos(n);
            while (pointer >= 0)
            {
                  pos[index] = {v[pointer].second, abs(loc)};
                  pointer--;
                  index++;
                  if (pointer >= 0 && index < n)
                  {
                        pos[index] = {v[pointer].second, loc};
                  }
                  pointer--;
                  index++;
                  loc--;
            }
            sort(pos.begin(), pos.end());
            // sorting the v vector by the ith building
            sort(v.begin(), v.end(),
                 [](const pair<long long, long long> &a, const pair<long long, long long> &b)
                 {
                       if (a.second == b.second)
                             return a.first < b.first;
                       return a.second < b.second;
                 });

            long long time = 0;
            for (long long i = 0; i < n; i++)
            {
                  time += abs(pos[i].second) * v[i].first * 2;
            }
            cout << time << endl;
            cout << 0 << " ";
            for (long long i = 0; i < n; i++)
            {
                  cout << pos[i].second << " ";
            }
            cout << endl;
      }
      return 0;
}