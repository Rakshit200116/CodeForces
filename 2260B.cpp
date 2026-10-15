#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;
        long long time = 0;
        int dummy1 = x, dummy2 = y;
        while (2 * dummy1 <= dummy2)
        {
            time++;
            dummy1++;
            dummy2++;
        }
        long long ans = 0;
        // cout << time << endl;
        for (int i = 0; i < min(k, time); i++)
        {
            ans += y % x;
            // cout << ans << endl;
            y++;
            x++;
        }
        ans += (y % x) * max((long long)0, k - time);
        cout << ans << endl;
    }
    return 0;
}

/*
3 10 = 1
4 11 = 3
5 12 = 2
6 13 = 1
7 14 = 0
8 15 = 7
*/