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
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool sorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                sorted = false;
        }
        if (sorted)
            cout << 0 << endl;
        else
        {
            if (arr[n - 2] > arr[n - 1])
                cout << -1 << endl;
            else
            {
                if (arr[n - 1] >= 0)
                {
                    cout << n - 2 << endl;
                    for (int i = 0; i < n - 2; i++)
                        cout << i + 1 << " " << n - 1 << " " << n << endl;
                }
                else
                    cout << -1 << endl;
            }
        }
    }
    return 0;
}
