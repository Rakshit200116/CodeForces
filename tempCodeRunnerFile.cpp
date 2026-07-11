#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int ans = 0;
        int maxm = 0;
        for (int i = 0; i < k; i++)
        {
            int temp;
            cin >> temp;
            if (temp >= 2)
                ans++;
            maxm = max(maxm, temp);
        }
        if (ans >= 2 || maxm >= 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}