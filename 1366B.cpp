#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t; // 100
    while (t--)
    {
        int n, x, m;
        cin >> n >> x >> m;
        pair<int, int> one = {x, x};
        for (int i = 0; i < m; i++)
        {
            int l, r;
            cin >> l >> r;
            if (r < one.first || l > one.second)
                continue;
            one.first = min(one.first, l);
            one.second = max(one.second, r);
        }
        // cout << one.second << " " << one.first << endl;
        cout << one.second - one.first + 1 << endl;
    }
    return 0;
}