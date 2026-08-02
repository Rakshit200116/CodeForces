#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int simple = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            simple = false;
            break;
        }
    }
    if (simple)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            int j = i + 1;
            if (s[i] == s[j])
            {
                if (j < n - 1)
                // s[j] = s[j + 1] + 1;
                {
                    if (s[i] != 'a' && s[j + 1] != 'a')
                        s[j] = 'a';
                    else if (s[i] != 'b' && s[j + 1] != 'b')
                        s[j] = 'b';
                    else
                        s[j] = 'c';
                }
                else
                {
                    if (s[j] < 'z')
                        s[j] = (s[j] + 1);
                    else
                        s[j] = 'a';
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}