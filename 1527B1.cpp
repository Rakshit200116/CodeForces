#include <iostream>
using namespace std;

bool palindrome(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    return true;
}

bool all_one(string s, int n)
{
    for (int i = 0; i < n; i++)
        if (s[i] == '0')
            return false;
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
        int Alice = 0, bob = 0;
        if (n % 2 != 0 && s[(n / 2)] == '0')
        {
            Alice++;
            s[n / 2] = '1';
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    Alice++;
                    s[i] = '1';
                    break;
                }
            }
        }
        bool rev = false, bobchance = true;
        while (!all_one(s, n))
        { // bob
            if (bobchance)
            {
                if (!palindrome(s) && !rev)
                {
                    rev = true;
                }
                else
                {
                    if (rev == true)
                        rev = false;
                    if (n % 2 != 0 && s[(n / 2)] == '0')
                    {
                        bob++;
                        s[n / 2] = '1';
                    }
                    else
                    {
                        for (int i = 0; i < n; i++)
                        {
                            if (s[i] == '0')
                            {
                                bob++;
                                s[i] = '1';
                                break;
                            }
                        }
                    }
                }
                bobchance = false;
            }
            // alice
            else
            {
                if (!palindrome(s) && !rev)
                {
                    rev = true;
                }
                else
                {
                    if (rev == true)
                        rev = false;
                    if (n % 2 != 0 && s[(n / 2)] == '0')
                    {
                        Alice++;
                        s[n / 2] = '1';
                    }
                    else
                    {
                        for (int i = 0; i < n; i++)
                        {
                            if (s[i] == '0')
                            {
                                Alice++;
                                s[i] = '1';
                                break;
                            }
                        }
                    }
                }
                bobchance = true;
            }
        }
        if (Alice > bob)
            cout << "BOB" << endl;
        else if (Alice == bob)
            cout << "DRAW" << endl;
        else
            cout << "ALICE" << endl;
    }
    return 0;
}