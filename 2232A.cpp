#include <iostream>
#include <algorithm>
#include <set>
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
        int middle = arr[n / 2];
        int left = 0, right = 0;

        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != middle)
            {
                left++;
            }
            if (arr[n - i - 1] != middle)
                right++;
        }
        cout << max(left, right) << endl;
    }
    return 0;
}