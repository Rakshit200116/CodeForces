#include <iostream>
using namespace std;
#include <vector>

bool palindrome(vector<char> s, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
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
        vector<char> v;
        for (int i = 0; i < n; i++)
            v.push_back(s[i]);
        int left = 0, right = n - 1;
        while (left <= right && s[left] == s[right])
        {
            left++;
            right--;
        }
        cout << (char)s[left] << (char)s[right] << endl;
        if (left > right)
            cout << 0 << endl;
        else
        {
            int ans = 0;
            while (left < n)
            {
                if (palindrome(v, n - ans))
                    break;
                if (v[left] == s[left])
                {
                    v.erase(v.begin() + left);
                    ans++;
                }
                left++;
            }
            cout << ans;
        }
    }
}