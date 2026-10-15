#include <iostream>
#include <stack>
#include <vector>
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
        stack<char> printer;
        vector<int> checker(n + 1, 0);
        int ans = n;
        for (int i = 1; i < n + 1; i++)
        {
            char ops = s[i - 1];
            if (ops == '1')
                printer.push(i);
            else if (ops == '2')
            {
                if (!printer.empty())
                {
                    checker[printer.top()] = 1;

                    printer.pop();
                }
                else
                    checker[i] = 1;
                ans--;
            }
            else
            {
                checker[i] = 1;
                ans--;
            }
        }
        cout << ans << endl;
        for (int i = 1; i < n + 1; i++)
            if (checker[i] == 0)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}