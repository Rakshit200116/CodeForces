#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[m + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr[temp]++;
        }
        int prefix[m + 1] = {0};
        long long pre = 0;
        for (int i = 1; i <= m; i++)
        {
            prefix[i] = pre;
            pre += arr[i];
        }
        long long ans = 0;
        for (int i = 1; i <= m; i++)
        {
            long long temp = 0;
            if (2 * i <= m)
                temp += arr[2 * i];
            temp += n - prefix[i];
            ans = max(ans, temp);
        }
        cout << ans << endl;
    }
    return 0;
}