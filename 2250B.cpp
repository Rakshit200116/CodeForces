#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int req_one = ((n + 1) / 2) + 1;
        // cout << req_one << " " << k << endl;
        if (k >= req_one || req_one >= n)
            cout << -1 << endl;
        else
        {
            int one = (n + 1) / 2;
            int zero = n - one;
            cout << one << " " << zero << endl;
            for (int i = 0; i < k + 1; i++)
            {
                // cout << "H" << endl;
                cout << "1";
                one--;
            }
            // cout << "HERE" << endl;
            while (one || zero)
            {
                if (zero > 0)
                {
                    cout << '0';
                    zero--;
                }
                if (one > 0)
                {
                    cout << '1';
                    one--;
                }
            }
            cout << endl;
        }
    }
    return 0;
}