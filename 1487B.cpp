#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a = n, b = 1;
        while (k - 1)
        {
            a -= 1;
            b += 1;
            k--;

            if (a <= 0)
                a += n;
            if (b > n)
                b -= n;
            if (a == b)
                b += 1;
            if (b > n)
                b -= n;
        }
        cout << b << endl;
    }
    return 0;
}