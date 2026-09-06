#include <iostream>
#include <vector>
using namespace std;

int function(int l, int r, vector<vector<int>> &pre)
{
    int value = 0;

    for (int i = 0; i < 31; i++)
    {
        if (pre[r][i] - pre[l - 1][i] == r - l + 1)
            value |= (1 << i);
    }

    return value;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<vector<int>> pre(n + 1, vector<int>(31, 0));

        for (int i = 0; i < 31; i++)
        {
            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (arr[j] & (1 << i))
                    count++;

                pre[j + 1][i] = count;
            }
        }

        int q;
        cin >> q;

        while (q--)
        {
            int l, k;
            cin >> l >> k;

            int low = l;
            int high = n;
            int ans = -1;

            while (low <= high)
            {
                int middle = low + (high - low) / 2;

                int range = function(l, middle, pre);

                if (range >= k)
                {
                    ans = middle;
                    low = middle + 1;
                }
                else
                {
                    high = middle - 1;
                }
            }

            cout << ans << " ";
        }

        cout << '\n';
    }

    return 0;
}