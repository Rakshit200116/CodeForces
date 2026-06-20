#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        long long lcm = (x / __gcd(x, y)) * y;
        long long x_terms = (n / x) - (n / lcm), y_terms = (n / y) - (n / lcm);
        long long y_sum = y_terms * (y_terms + 1) / 2;
        long long x_sum = n * (n + 1) / 2;
        x_sum -= (n - x_terms) * (n - x_terms + 1) / 2;
        cout << x_sum - y_sum << endl;
    }
    return 0;
}