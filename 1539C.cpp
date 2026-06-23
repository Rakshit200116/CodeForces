#include <iostream>
using namespace std;
#include <cmath>
#include <algorithm>

int main()
{
    long long n, k, x;
    cin >> n >> k >> x;
    long long arr[n];
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        long long difference = arr[i + 1] - arr[i];
        long long val = (difference / x) + (difference % x != 0) - 1;
        if (difference <= x)
            continue;
        else if (k >= val)
        {
            k -= val;
            continue;
        }
        else
        {
            ans++;
        }
    }
    cout << ans + 1 << endl;
    return 0;
}