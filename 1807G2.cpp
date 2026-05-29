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
            cin >> arr[i];
        sort(arr, arr + n);
        long long sum = 1;
        int ans = 1;
        if (arr[0] != 1)
            ans = 0;
        else
        {
            for (int i = 1; i < n; i++)
            {

                if (arr[i] > sum)
                {
                    ans = 0;
                    break;
                }
                sum += arr[i];
            }
        }
        cout << (ans == 1 ? "YES" : "NO") << endl;
    }
    return 0;
}