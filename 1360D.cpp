#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        for (int i = sqrt(n); i >= 1; i--)
        {
            if (n % i == 0)
            {
                if (i <= k)
                    ans = max(ans, i);
                if (n / i <= k)
                    ans = max(ans, n / i);
            }
        }
        cout << n / ans << endl;
    }
    return 0;
}