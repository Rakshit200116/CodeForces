#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 998244353;
const int MAXN = 200000 + 5;

long long fact[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute factorials
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++)
        fact[i] = (fact[i - 1] * i) % MOD;

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        long long operations = 0;
        long long ways = 1;

        int n = s.size();

        for (int i = 0; i < n;)
        {
            int j = i;
            while (j < n && s[j] == s[i])
                j++;

            int len = j - i;

            operations += (len - 1);
            ways = (ways * len) % MOD;

            i = j;
        }

        ways = (ways * fact[operations]) % MOD;

        cout << operations << " " << ways << "\n";
    }

    return 0;
}