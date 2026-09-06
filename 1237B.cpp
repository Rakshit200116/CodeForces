#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int entry[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cin >> entry[i];
    }
    int exit[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        int temp;
        cin >> temp;
        exit[temp] = i;
    }
    int last_exit = 0;
    int fines = 0;
    for (int i = 1; i < n + 1; i++)
    {
        int entry_car = entry[i];
        int exit_pos = exit[entry_car];
        if (last_exit == 0)
        {
            last_exit = exit_pos;
        }

        else if (exit_pos > last_exit)
            last_exit = exit_pos;
        else
            fines += 1;
    }
    cout << fines << endl;
    return 0;
}