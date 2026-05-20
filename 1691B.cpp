#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            long long n;
            cin >> n; // Read the number of students
            vector<pair<long long, int>> v(n);
            for (int i = 0; i < n; i++) // Read the shoe sizes for each student
            {
                  long long temp;
                  cin >> temp;
                  v[i] = {temp, i + 1};
            }

            map<long long, long long> freq; // Map to store frequency of each shoe size
            for (int i = 0; i < n; i++)     // Count frequency of each shoe size
                  freq[v[i].first]++;

            long long flag = 0; // Flag to check if a valid shuffling is possible
            for (auto i : freq)
            {
                  if (i.second == 1) // If any shoe size appears only once, shuffling is not possible
                  {
                        flag = 1;
                        break;
                  }
            }

            if (flag)
            {
                  cout << -1 << endl; // Output -1 if shuffling is not possible
                  continue;
            }
            else
            {
                  int left = 0, right = 0;
                  while (left < n && right < n)
                  {
                        while (right < n - 1 && v[right + 1].first == v[left].first)
                        {
                              right++;
                        }
                        while (left != right && left < n - 1)
                        {
                              int temp = v[left].second;
                              v[left].second = v[right].second;
                              v[right].second = temp;
                              left++;
                        }
                        left++;
                        right++;
                  }
                  for (int i = 0; i < n; i++)
                        cout << v[i].second << " ";
                  cout << endl;
            }
      }
      return 0;
}