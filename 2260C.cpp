/*
0 0 0 0 1
0 0 0 1 0
0 0 0 1 1
0 0 1 0 0
0 0 1 0 1
0 0 1 1 0
0 0 1 1 1
0 1 0 0 0
0 1 0 0 1
0 1 0 1 0
0 1 0 1 1
0 1 1 0 0
0 1 1 0 1
0 1 1 1 0
0 1 1 1 1
1 0 0 0 0
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = x ^ y, operations = 0;
        int opans = 0;
        while (x >= 0)
        {
            int temp = x ^ y;
            if (temp > ans)
            {
                ans = temp;
                opans = operations;
            }
            operations++;
            x--;
            y++;
        }
        cout << ans << " " << opans << endl;
    }
    return 0;
}