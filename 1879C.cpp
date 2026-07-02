#include <iostream>
#include <vector>
using namespace std;

long long fact(int n)
{
    const long long MOD = 998244353;
    long long ans = 1;
    while (n > 0)
    {

        ans = (ans * n) % MOD;
        n--;
    }
    return ans;
}

int main()
{
    long long MOD = 998244353;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long ans = 0, ans2 = 1;

        for (int i = 0; i < s.size(); i++)
        {
            int j = i + 1;
            for (j; j < s.size(); j++)
            {
                if (s[i] == s[j])
                {

                    continue;
                }
                else
                {

                    break;
                }
            }
            int length = j - i;
            if (length >= 2)
            {
                ans += (length - 1);
                ans2 = (ans2 * fact(length)) % MOD;
            }
            i = j - 1;
        }
        cout << ans << " " << ans2 << endl;
    }
    return 0;
}