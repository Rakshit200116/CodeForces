#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long ans =
            (n * (n + 1) % MOD) *
            ((4 * n - 1) % MOD) % MOD;

        ans = ans * 166666668 % MOD;
        // modular inverse of 6

        ans = ans * 2022 % MOD;

        cout << ans << endl;
    }

    return 0;
}