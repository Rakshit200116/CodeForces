#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, kx, ky, qx, qy;
        cin >> a >> b;
        cin >> kx >> ky;
        cin >> qx >> qy;

        set<pair<int, int>> king, queen;

        int dx[] = {a, a, -a, -a, b, b, -b, -b};
        int dy[] = {b, -b, b, -b, a, -a, a, -a};

        for (int i = 0; i < 8; i++)
        {
            king.insert({kx + dx[i], ky + dy[i]});
            queen.insert({qx + dx[i], qy + dy[i]});
        }

        int ans = 0;

        for (auto p : king)
        {
            if (queen.count(p))
                ans++;
        }

        cout << ans << endl;
    }
}