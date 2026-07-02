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
            cin >> arr[i];
        cout << 1 << " ";
        for (int i = 1; i < n; i++)

        {
            int high = i, low = 0;
            int mid;
            while (low <= high)
            {
                mid = low + (high - low) / 2;
                int length = i - mid + 1;
                if (arr[mid] < length)
                    low = mid + 1;
                else if (arr[mid] >= length)
                {
                    high = mid - 1;
                }
            }
            cout << i - high << " ";
        }
        cout << endl;
    }
    return 0;
}