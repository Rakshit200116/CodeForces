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
        int dots = 0;
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                int count = 0;
                dots++;
                for (int j = i; j < n; j++)
                {
                    if (s[j] == '.')
                        count++;
                    else
                        break;
                }
                if (count >= 3)
                    check = true;
            }
        }
        if (check)
            cout << 2 << endl;
        else
            cout << dots << endl;
    }
    return 0;
}