#include <iostream>
using namespace std;

int main()
{
    long long n, m, a, b;
    cin >> n >> m >> a >> b;
    long long ans = n * a;
    for (long long i = n / m + 1; i >= 0; i--)
    {
        long long temp = b * i;

        if (n > m * i)
            temp += (n - m * i) * a;

        ans = min(ans, temp);
    }
    cout << ans << endl;
    return 0;
}