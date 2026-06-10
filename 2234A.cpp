#include <iostream>
#include <algorithm>
using namespace std;

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
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        if (n == 2)
            cout << arr[0] << " " << arr[1] << endl;
        else
        {
            int counter = 0;
            for (int i = 2; i < n; i++)
            {
                if (arr[i] == arr[i - 2] % arr[i - 1])
                    counter++;
            }
            if (counter == n - 2)
                cout << arr[0] << " " << arr[1] << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}