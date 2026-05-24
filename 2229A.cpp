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
        int min_value = 1001, max_value = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            min_value = min(min_value, arr[i]);
            max_value = max(max_value, arr[i]);
        }
        int avg = (min_value + max_value) / 2;
        int ops = max(avg - min_value, max_value - avg);
        cout << ops << endl;
    }
    return 0;
}