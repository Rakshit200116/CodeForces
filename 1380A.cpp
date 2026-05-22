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
        int ans = 0;

        for (int j = 1; j < n - 1; j++)
        {
            int x = -1, z = -1;
            for (int i = 0; i < j; i++)
            {
                if (arr[i] < arr[j])
                    x = i;
            }
            for (int k = j + 1; k < n; k++)
            {
                if (arr[j] > arr[k])
                    z = k;
            }
            if (!(x == -1 || z == -1))
            {
                cout << "YES" << endl
                     << x + 1 << " " << j + 1 << " " << z + 1 << endl;
                ans = 1;
                break;
            }
        }
        if (ans == 0)
            cout << "NO" << endl;
    }
    return 0;
}