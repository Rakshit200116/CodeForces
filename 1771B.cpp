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
        vector<int> notgood(n + 1, -1);
        while (m--)
        {
            int a, b;
            cin >> a >> b;

            if (a > b)
                swap(a, b);

            if (notgood[a] == -1)
                notgood[a] = b;
            else
                notgood[a] = min(notgood[a], b);
        }
        int pre[n + 1];
        int last = n + 1;
        for (int i = n; i > 0; i--)
        {
            if (notgood[i] != -1)
                last = min(last, notgood[i]);
            pre[i] = last;
        }
        long long ans = 0;
        for (int i = 1; i < n + 1; i++)
        {
            // cout << pre[i] << " ";
            long long x = pre[i] - i;
            ans += x;
        }
        cout << ans << endl;
    }

    return 0;
}
