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
        int ans = (1 << 30) - 1;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp != i)
            {
                ans &= temp;
            }
        }
        cout << ans << endl;
    }
}