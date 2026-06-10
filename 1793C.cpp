#include <iostream>
#include <set>
using namespace std;

bool function(int k, set<int> &s)
{
    if (*s.begin() == k)
        return true;
    else if (*s.rbegin() == k)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        set<int> s(arr, arr + n);

        int i = 0, j = n - 1;
        while (i < j)
        {
            if (function(arr[i], s))
            {
                s.erase(arr[i]);
                i++;
                continue;
            }
            if (function(arr[j], s))
            {
                s.erase(arr[j]);
                j--;
                continue;
            }
            break;
        }
        if (i >= j)
            cout << -1 << endl;
        else
            cout << i + 1 << " " << j + 1 << endl;
    }
    return 0;
}