#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int hash[101] = {0};
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            hash[arr[i]]++;
            if (hash[arr[i]] >= 2)
                ans = 0;
        }
        if (ans == 0)
            cout << -1 << endl;
        else
        {
            sort(arr, arr + n, greater<int>());
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}