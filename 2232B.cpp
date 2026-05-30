#include <iostream>
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
        int minm = __INT32_MAX__;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            minm = min(minm, arr[i]);
        }
        if (arr[0] == minm)
        {
            for (int i = 0; i < n; i++)
                cout << minm << " ";
            cout << endl;
        }
        else
        {
            long long sum = arr[0];
            int ans[n];
            ans[0] = arr[0];
            int arr_max = arr[0];
            for (int i = 1; i < n; i++)
            {
                sum += arr[i];
                int h = sum / (i + 1);
                ans[i] = min(arr_max, h);
                arr_max = min(arr_max, h);
            }
            for (int i = 0; i < n; i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
    return 0;
}