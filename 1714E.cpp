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
        bool zero = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] += arr[i] % 10;
            if (arr[i] % 10 == 0)
                zero = true;
        }
        if (zero)
        {
            bool ans = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] != arr[i + 1])
                    ans = false;
            }
            cout << (ans ? "Yes" : "No") << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                while (arr[i] % 10 != 2)
                    arr[i] += arr[i] % 10;
                arr[i] %= 20;
            }
            bool ans = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] != arr[i + 1])
                    ans = false;
            }
            cout << (ans ? "Yes" : "No") << endl;
        }
    }
    return 0;
}