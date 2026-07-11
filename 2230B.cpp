#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        long long ans = 0;
        int bad = 0; // count of 1s and 3s seen so far

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '4')
            {
                ans++; // must remove every 4
            }
            else if (s[i] == '1' || s[i] == '3')
            {
                bad++; // potential left side of bad pair
            }
            else if (s[i] == '2')
            {
                if (bad > 0)
                {
                    // choice: remove this 2 (cost 1)
                    // or remove all bad 1s/3s before it (cost = bad)
                    if (bad <= 1)
                    {
                        // cheaper to remove the 1s/3s
                        ans += bad;
                        bad = 0; // they're removed
                    }
                    else
                    {
                        // cheaper to remove the 2
                        ans += 1;
                        // bad stays — those 1s/3s still exist for future 2s
                    }
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}