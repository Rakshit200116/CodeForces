#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a, b;
        if ((n % 12) == 10)
            a = 22;
        else
            a = n % 12;
        b = n - a;
        if (a <= n && b <= n)
            cout << a << " " << b << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}