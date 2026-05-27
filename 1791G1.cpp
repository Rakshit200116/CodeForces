#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, n;
        cin >> n >> c;
        int arr[n];
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            arr[i] = temp + i + 1;
        }
        sort(arr, arr + n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= c)
            {
                ans++;
                c -= arr[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}