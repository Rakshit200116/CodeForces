#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
        }
        if (one % 2 != 0)
            cout << "NO" << endl;
        else
        {
            vector<int> one_pos;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                    one_pos.push_back(i + 1);
            }
        }
    }

    return 0;
}