#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        vector<int> prefix(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (a[i] == '1') ? 1 : -1;
            prefix[i] = sum;
        }

        int pointer = n - 1;
        bool flipped = false;
        bool possible = true;

        while (pointer >= 0)
        {
            char actual = flipped ? (char)(a[pointer] ^ 1) : a[pointer];

            if (actual == b[pointer])
            {
                pointer--;
            }
            else if (prefix[pointer] == 0)
            {
                flipped = !flipped;
                pointer--;
            }
            else
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}
