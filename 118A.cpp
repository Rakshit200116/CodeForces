#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> str;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] < 97)
            s[i] += 32;
        if (s[i] != 'a' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'e' && s[i] != 'y')
        {
            str.push_back('.');
            str.push_back(s[i]);
        }
    }
    for (int i = 0; i < str.size(); i++)
        cout << str[i];
    cout << endl;
}