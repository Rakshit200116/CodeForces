#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
                continue;
            else if (s[i] != c && s[n - i - 1] != c)
                ans += 2;
            else
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}