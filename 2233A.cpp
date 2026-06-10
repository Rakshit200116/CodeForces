#include <iostream>
using namespace std;

// Not using ai
int approach_one(int n, int x, int y)
{
    long long time = 0;
    while (n > 0)
    {
        n -= x;
        n -= y;
        time++;
    }
    return time;
}

int approach_two(int n, int x, int y, int z)
{
    long long time = 0;
    while (n > 0)
    {
        n -= x;
        if (z > 0)
            z--;
        else
        {
            n -= y * 10;
        }
        time++;
    }
    return time;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        cout << min(approach_one(n, x, y), approach_two(n, x, y, z)) << endl;
    }
    return 0;
}