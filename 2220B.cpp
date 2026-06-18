#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        bool ans = false;
        for (int i = 0; i < n; i++)
        {
            int num = arr[i];
            int length = m + 1 - num;

            if (i + length > n) // ✅ boundary check against n
                continue;

            bool ans2 = true;
            for (int j = i; j < i + length; j++) // ✅ increment j
            {
                if (arr[j] != arr[i])
                {
                    ans2 = false;
                    break;
                }
            }
            ans = ans || ans2; // ✅ YES if any valid subarray
        }
        cout << (ans ? "NO" : "YES") << "\n";
    }
    return 0;
}