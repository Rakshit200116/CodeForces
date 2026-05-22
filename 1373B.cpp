#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
        int final_value = min(one, zero);
        cout << (final_value % 2 == 0 ? "NET" : "DA")
             << endl;
    }
    return 0;
}