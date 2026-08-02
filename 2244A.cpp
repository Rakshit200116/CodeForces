#include <iostream>
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
        int line = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '#')
            {
                int temp = 1;
                int j = i + 1;
                for (j; j < n; j++)
                {
                    if (s[j] == '#')
                        temp++;
                    else
                        break;
                    line = max(line, temp);
                    // cout << temp << endl;
                }
                i = j;
            }
        }
        cout << (line + 1) / 2 << endl;
    }
    return 0;
}