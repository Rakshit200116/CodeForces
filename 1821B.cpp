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
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
        int left = 0;
        int start = 0, end = 0;
        while (arr1[left] == arr2[left])
        {
            left++;
        }
        while (arr2[left + 1] >= arr2[left] && left < n - 1)
        {
            left++;
            end = left;
        }
        while (arr2[left - 1] <= arr2[left] && left > 0)
        {
            left--;
            start = left;
        }

        cout << start + 1 << " " << end + 1 << endl;
    }
    return 0;
}