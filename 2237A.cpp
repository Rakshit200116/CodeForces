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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0;
        int small = 1000;
        for (int i = 0; i < n; i++)
        {
            small = min(small, arr[i]);
            sum += small;
        }
        cout << sum << endl;
    }
    return 0;
}