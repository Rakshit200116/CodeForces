#include <iostream>
#include <vector>
#include <set>
using namespace std;

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
        set<char> v;
        for (int i = 0; i < n; i++)
            v.insert(s[i]);
        int ans = __INT_MAX__;
        for (auto c : v)
        {
            int temp = 0;
            bool isposs = true;
            int left = 0, right = n - 1;
            while (left <= right)
            {
                if (s[left] == s[right])
                {
                    left++;
                    right--;
                    continue;
                }
                if (s[left] == c)
                {
                    temp++;
                    left++;
                }
                else if (s[right] == c)
                {
                    temp++;
                    right--;
                }
                else
                {
                    isposs = false;
                    break;
                }
            }
            if (!isposs)
                temp = __INT_MAX__;
            ans = min(ans, temp);
        }
        cout << (ans == __INT_MAX__ ? -1 : ans) << endl;
    }
    return 0;
}