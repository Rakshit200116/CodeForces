#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[n];
        a[0] = 1;
        for (int i = 1; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        int pointerb = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int element = a[i];
            while (element >= b[pointerb] && pointerb < n)
                pointerb++;
            if (pointerb == n)
            {
                // cout << element << endl;
                ans++;
            }
            else
                pointerb++;
        }
        cout << ans << endl;
    }
    return 0;
}

/*
4 3 3 2 2 1 1
1 1 1 1 3 3 3 3

1 1 1 2 2 3 3 4
3 3 3 3

1 1 1 1 3 3 3 3
*/