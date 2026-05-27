#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> value;
        for (int i = 0; i < s.size(); i++)
        {
            value.insert(s[i]);
        }
        char arr[value.size()];
        for (int i = 0; i < value.size(); i++)
        {
            arr[i] = s[i];
        }
        int ans = 1;
        for (int i = value.size(); i < s.size(); i++)
        {
            if (s[i] != arr[i % value.size()])
                ans = 0;
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}