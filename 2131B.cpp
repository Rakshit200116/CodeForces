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
        int arr[n], sort_arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sort_arr[i] = arr[i];
        }
        sort(sort_arr, sort_arr + n);
        for (int i = 0; i < n; i++)
            cout << sort_arr[i] - arr[i] << " ";
    }
    return 0;
}