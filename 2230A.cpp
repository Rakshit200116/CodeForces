#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        long long cost = 0;
        if (b <= (3 * a))
        {
            long long pack = n / 3;
            n = n % 3;
            cost = (long long)(pack * b);
        }
        if (b <= (2 * a))
        {
            long long pack = n / 2;
            n = n % 2;
            cost += (long long)(pack * b);
        }
        if (b <= (a))
        {
            long long pack = n;
            n = n % 1;
            cost += (long long)(pack * b);
        }
        if (n > 0)
            cost += (long long)(n * a);
        cout << cost << endl;
    }
}