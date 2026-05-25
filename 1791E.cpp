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
        int neg = 0;
        int min_value = __INT32_MAX__;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
                neg++;
            min_value = min(min_value, abs(arr[i]));
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
            sum += abs(arr[i]);
        if (neg % 2 == 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - (2 * min_value) << endl;
        }
    }
}