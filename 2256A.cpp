#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int smallest = min(a, min(b, c));

        int secondSmallest = a + b + c - smallest - max(a, max(b, c));
        // cout << secondSmallest << " " << smallest << endl;
        if (a == b & b == c)
            cout << 0 << endl;
        else
        {
            cout << min(a + b + c - smallest - secondSmallest, smallest + secondSmallest) - smallest << endl;
        }
    }
    return 0;
}