#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool sorte = false;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] > a[i])
                sorte = true;
        }
        if (!sorte)
        {
            bool poss = true;
            for (int i = 0; i < n; i++)
                if (a[i] < b[i])
                    poss = false;
            if (!poss)
            {
                cout << -1 << endl;
                continue;
            }
            else
            {
                int ans1 = 0, ans2 = c;
                for (int i = 0; i < n; i++)
                {
                    ans1 += a[i] - b[i];
                }
                sort(a, a + n);
                for (int i = 0; i < n; i++)
                {
                    ans2 += a[i] - b[i];
                }
                cout << min(ans1, ans2) << endl;
            }
        }
        else
        {
            sort(a, a + n);
            sort(b, b + n);
            bool poss = true;
            for (int i = 0; i < n; i++)
                if (a[i] < b[i])
                    poss = false;
            if (!poss)
            {

                cout << -1 << endl;
                continue;
            }
            else
            {

                int ans = c;
                for (int i = 0; i < n; i++)
                {

                    ans += a[i] - b[i];
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}