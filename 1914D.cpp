#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a[i].first = temp;
            a[i].second = i;
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            b[i].first = temp;
            b[i].second = i;
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            c[i].first = temp;
            c[i].second = i;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        int ans = 0;

        for (int i = n - 3; i < n; i++)
        {

            for (int j = n - 3; j < n; j++)
            {
                for (int k = n - 3; k < n; k++)
                {
                    if (a[i].second != b[j].second)
                    {
                        if (b[j].second != c[k].second)
                        {
                            if (c[k].second != a[i].second)
                                ans = max(ans, a[i].first + b[j].first + c[k].first);
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
}