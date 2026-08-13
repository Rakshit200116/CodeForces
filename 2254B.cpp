#include <iostream>
using namespace std;

int length(string s)
{
    int n = s.size();
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            continue;
        ans++;
    }
    ans++;
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = length(s);
        bool tick = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == s[i + 1] && s[i - 1] != s[i])
                tick = true;
        }
        tick ? ans -= 2 : ans -= 1;
        cout << ans << endl;
    }
    return 0;
}