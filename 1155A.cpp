#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            cout << "YES" << endl;
            cout << i + 1 << " " << i + 1 + 1 << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}