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
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
                arr[i][j] = s[j] == '0' ? 0 : 1;
        }
        long long ans = 0;
        int layers = n / 2;
        for (int i = 0; i < layers; i++)
        {
            int sum = 0;
            for (int j = i; j < n - i - 1; j++)
            {
                sum = arr[i][j] + arr[j][n - i - 1] + arr[n - i - 1][n - j - 1] + arr[n - j - 1][i];
                ans += min(sum, 4 - sum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}