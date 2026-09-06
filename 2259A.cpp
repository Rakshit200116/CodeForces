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
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n; i += k)
        {
            // cout << i << endl;
            bool possible = false;
            for (int j = i; j < i + k; j++)
                if (s[j] == '0')
                    possible = true;
            if (!possible)
            {
                // cout << i << endl;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}