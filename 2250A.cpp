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
        if (n % 2 != 0)
            cout << "NO" << endl;
        else
        {
            int ans = 0;
            int left = 0, right = 1e9;
            for (int i = 0; i < n; i += 2)
            {
                int first = arr[i];
                int second = arr[i + 1];
                if (first < right)
                    right = first;
                if (second > left)
                    left = second;
            }
            // cout << left << " " << right << endl;
            if (right - left > 1)
                cout << "YES" << endl;
            else
                cout << "NO"
                     << endl;
        }
    }
    return 0;
}