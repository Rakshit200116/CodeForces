#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                zero++;
        }
        if (!zero)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << "A";
            cout << endl;
        }
        if (zero == 1)
            cout << "NO"
                 << endl;
        if (zero >= 2)
        {
            cout << "YES" << endl;
            bool check = false;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 0)
                {
                    if (!check)
                    {
                        cout << "A";
                        check = true;
                    }
                    else
                        cout << "B";
                }
                else
                    cout << "C";
            }
            cout << endl;
        }
    }
    return 0;
}