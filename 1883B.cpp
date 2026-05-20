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
        if (n == 1 || n - k == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int hash[26] = {0};
            for (int i = 0; i < n; i++)
            {
                hash[s[i] - 97]++;
            }
            int odd = 0;
            for (int i = 0; i < 26; i++)
            {
                int count = hash[i];
                if (count % 2 != 0)
                    odd++;
            }
            if (odd - 1 <= k && n - odd + 1 % 2 != 0)
                cout << "YES" << endl;
            else if (odd <= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}