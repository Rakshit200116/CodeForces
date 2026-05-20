#include <iostream>
using namespace std;

int main()
{
      int n, m, house = 1;
      long long time = 0;
      cin >> n >> m;
      int task_arr[m];
      for (int i = 0; i < m; i++)
            cin >> task_arr[i];
      for (int i = 0; i < m; i++)
      {
            if (task_arr[i] > house)
            {
                  time += task_arr[i] - house;
                  house = task_arr[i];
            }
            else if (task_arr[i] == house)
            {
                  time += 0;
            }
            else
            {
                  time += (n - house + 1);
                  time += task_arr[i] - 1;
                  house = task_arr[i];
            }
      }
      cout << time;
      return 0;
}